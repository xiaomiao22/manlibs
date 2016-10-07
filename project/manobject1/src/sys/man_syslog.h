#ifndef _MAN_SYSLOG_H_INCLUDE_
#define _MAN_SYSLOG_H_INCLUDE_

#include <syslog.h>
/*
 * Example: 
 * man_syslog(LOG_ERR|LOG_USER, "This is a err!");
 */
void man_syslog(int level, const char *format, ...);


#endif /*_MAN_SYSLOG_H_INCLUDE_*/
