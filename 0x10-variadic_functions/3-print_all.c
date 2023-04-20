#include "variadic_functions.h"
#include <stdio.h>
/**
 * p_char - print char
 * @op: va_list
 */
void p_char(va_list op)
{
	printf("%c", va_arg(op, int));
}

/**
 * p_string - print string
 * @op: va_list
 */
void p_string(va_list op)
{
	char *s = va_arg(op, char *);

	printf((s == NULL) ? "%p" : "%s", s);
}

/**
 * p_float - print float
 * @op: va_list
 */
void p_float(va_list op)
{
	printf("%f", va_arg(op, double));
}

/**
 * p_int - print int
 * @op: va_list
 */
void p_int(va_list op)
{
	printf("%d", va_arg(op, int));
}
/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *sp = ", ";
	check list[] = {
		{"c", p_char},
		{"s", p_string},
		{"i", p_int},
		{"f", p_float}
	};
	va_list op;

	va_start(op, format);

	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (list[j].type[0] == format[i / 4])
		{
			list[j].f(op);
			if (format[(i / 4) + 1] != '\0')
				printf("%s", sp);
		}
		i++;
	}
	printf("\n");
	va_end(op);
}

