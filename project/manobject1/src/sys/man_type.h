#ifndef _MAN_TYPE_H_INCLUDE_
#define _MAN_TYPE_H_INCLUDE_

#include <stdint.h>
#include <sys/types.h>

/* int type */
typedef intptr_t		man_int_t;
typedef uintptr_t		man_uint_t;
typedef intptr_t		man_flag_t;

/* char type */
typedef char			man_char_t;
typedef u_char			man_uchar_t;

/* inline */
#ifndef man_inline
#define man_inline		inline
#endif

#endif /*_MAN_TYPE_H_INCLUDE_*/
