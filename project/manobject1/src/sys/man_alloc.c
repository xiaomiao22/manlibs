
#include <man_alloc.h>
#include <man_syslog.h>
#include <string.h>

man_uint_t	man_pagesize;
man_uint_t	man_pagesize_shift;
man_uint_t	man_cacheline_size;

void *man_alloc(size_t size)
{
	void *p;
	p = malloc(size);
	if (p == NULL) {
		man_syslog(LOG_ALERT, "malloc fail!");
	}

	return p;
}

void *man_calloc(size_t size)
{
	void *p;

	p = man_alloc(size);

	if (p) {
		memset(p, 0, size);
	}

	return p;
}

#if (MAN_HAVE_POSIX_MEMALIGN)

void *man_memalign(size_t alignment, size_t size)
{
	void   *p;
	int		err;

	err = posix_memalign(&p, alignment, size);

	if (err) {
		man_syslog(LOG_ALERT, "posix_memalign fail!");

		p = NULL;
	}

	return p;
}

#elif (MAN_HAVE_MEMALIGN)

void *man_memalign(size_t alignment, size_t size)
{
	void *p;
	p = memalign(alignment, size);

	if (p == NULL) {
		man_syslog(LOG_ALERT, "memalign fail!");
	}

	return p;
}

#endif
