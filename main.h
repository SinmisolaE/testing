#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
typedef struct 
{
	char *form;
	int (*prnt_pointr)();
}check;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list list);
int print_str(va_list list);
int _strlen(char *n);
int print_percent(void);
int _strlencons(const char *n);

#endif
