#include <syslog.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void man_syslog(int level, const char *format, ...)
{
	char buff[512];

	memset(buff, 0, sizeof(buff));

	va_list ap;
	va_start(ap, format);
	vsprintf(buff, format, ap);
	va_end(ap);

	syslog(level, "[man messages: %s] [sys messages: %m] \n", buff);

}	

