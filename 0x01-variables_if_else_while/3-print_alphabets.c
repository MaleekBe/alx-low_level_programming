#include <stdio.h>
/**
 *main -upper and lower case letters
 *
 *Return: 0
*/
int main(void)
{
	char chu;
	char chl;

	for (chu = 'a'; chu <= 'z'; chu++)
	{
		putchar(chu);
	}
	for (chl = 'A'; chl <= 'Z'; chl++)
	{
		putchar(chl);
	}
	putchar('\n');
return (0);
}

