#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main
 * Kevin Bayter
 * Return: 0
 */
int main(void)
{
	int n;
	int v;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v = n % 10;

	if (v > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, v);
	else if (v == 0)
		printf("%s %d is %d and is 0\n", str, n, v);
	else if (v < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, v);

	return (0);
}
