#include "main_h"

/**
* _isupper - check for uppercase characters.
* @c: c - variable
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
