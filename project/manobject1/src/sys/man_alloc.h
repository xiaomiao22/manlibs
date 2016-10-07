#ifndef _MAN_ALLOC_H_INCLUDE_
#define _MAN_ALLOC_H_INCLUDE_

#include <stdlib.h>
#include <man_type.h>

void *man_alloc(size_t size);
void *man_calloc(size_t size);

#define man_free		free

#if (MAN_HAVE_POSIX_MEMALIGN || MAN_HAVE_MEMALIGN)

void *man_memalign(size_t alignment, size_t size)

#else

#define man_memalign(alignment, size) man_alloc(size);

#endif

extern man_uint_t  man_pagesize;
extern man_uint_t  man_pagesize_shift;
extern man_uint_t  man_cahceline_size;

#endif /*_MAN_ALLOC_H_INCLUDE_*/
