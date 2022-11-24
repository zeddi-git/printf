#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * print_char - print single character
 * @ap: arg list
 * Return: number of printed char
 */


int print_char(va_list args)
{
	char c = va_arg(args, int);

	if (c == '\0')
	{
		return (write(1, &c, 1));
	}
	_putchar(c);
	return (1);
}

/**
 * print_str - print string
 * @args: arg list
 * Return: number of printed char
 */
int print_str(va_list args)
{
	char *argument = va_arg(args, char *);
	int sum = 0;

	if (!argument)
	{
		sum += _puts("(null)", 0);
		return (sum);
	}

	return (_puts(argument, 0));
}

/**
 * print_percent -  print percent character
 *  @args: char
 *  Return: percent character
 */

int print_percent(va_list args __attribute__((unused)))
{
	return (_putchar('%'));
}

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
int _puts(char *str, int)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
