#ifndef _MAN_LIST_H_INCLUDE_
#define _MAN_LIST_H_INCLUDE_

#include <man_type.h>
#include <man_err.h>

typedef sturct man_list_part_s  man_list_part_t;

struct man_list_part_s {
	void			*elts;
	man_uint_t		 nelts;
	man_list_part_t *next;
};

typedef struct {
	man_list_part_t *last;
	man_list_part_t  part;
	size_t			 size;
	man_uint_t		 nalloc;
	man_pool_t		*pool;
} man_list_t;

man_list_t *man_list_create(man_pool_t *pool, man_uint_t n, size_t size);

static man_inline man_int_t
ngx_list_init(man_list_t *list, man_pool_t *pool, man_uint_t n, size_t size)
{
	list->part.elts = man_palloc(pool, n * size);
	if (list->part.elts == NULL) {
		return MAN_ERROR;
	}

	list->part.nelts = 0;
	list->part.next = NULL;
	list->last = &list->part;
	list->size = size;
	list->nalloc = n;
	list->pool = pool;

	return MAN_OK;
}


#endif /*_MAN_LIST_H_INCLUDE_*/
