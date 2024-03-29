#include "main.h"

/**
 * _print_rev_recursion - recursively prints a string in reverse
 * @s: the string to be printed
 *
 * Author: Destiny Saturday (DestinedCodes)
 * Date: 07/06/2023
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
