#include<stdio.h>
/**
 * main -print the sizes of types
 *
 * Return: 0
*/
int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	char charType;
	long long int longlongintType;

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long int: %zu byte\n", sizeof(longlongintType));
	printf("Size of float: %zu byte\n", sizeof(floatType));
	return (0);
}
