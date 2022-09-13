#include <stdio.h>
#include <main.h>
/**
 * main - Entry point
 *
 * Return: Always returns 0
 *
 */
int main(void)
{
	char str[100] ;
        int ch, i, n = 0 ;

        while ((ch = getchar () ) != EOF && n < 1000)
	str [ n ++] = ch;

        for (i =0; i < n; ++i)
	putchar (str [i]);
        
       putchar('\n');	
	return (0);
}
