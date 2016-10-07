#ifndef _MAN_STRING_H_INCLUDE_
#define _MAN_STRING_H_INCLUDE_

#include <man_type.h>

typedef struct {
	size_t		 len;
	u_char		*date;
} man_str_t;

typedef struct {
	man_str_t	 key;
	man_str_t	 value;
} man_keyval_t;

#define man_strncmp(s1, s2, n) strncmp((const char *) s1, (const char *) s2, n)



#endif /*_MAN_STRING_H_INCLUDE_*/
