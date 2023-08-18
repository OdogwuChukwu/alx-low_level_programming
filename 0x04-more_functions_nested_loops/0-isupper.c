#include"main.h"

/**
 * _isuppler-checks for uppercase character
 * @c: function parameter
 * Return: 1 on success 0 on failure
 */
int _isuppler(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
