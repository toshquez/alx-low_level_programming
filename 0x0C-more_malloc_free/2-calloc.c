#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an arrayof @nmemb elements of
 * @size bytes each and retruns a pointer to the alocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of the size bytes
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0; l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
