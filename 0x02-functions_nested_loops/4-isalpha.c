#include "main.h"
/**
*main - check the code
*
* Return: 1 if true, 0 if false
*/
int _isalpha(int c)
{
	char c;

	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
