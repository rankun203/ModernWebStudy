#include <stdio.h>
#include <stdlib.h>

/*
 * Author: rankun203@gmail.com
 * Purpose: Use functions
 */

/*
 Add two numbers.
 */
int add(int a, int b);
/*
 Sustract two numbers.
 */
int subtract(int a, int b);
/*
 Multiplicate two numbers.
 */
int multiplicate(int a, int b);
/*
 Divide two numbers.
 */
int divide(int a, int b);

int main()
{
	int a, b;
	printf("Please input 2 numbers devided by space: ");
	scanf("%d %d", &a, &b);

	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", a, b, subtract(a, b));
	printf("%d x %d = %d\n", a, b, multiplicate(a, b));
	printf("%d / %d = %d\n", a, b, divide(a, b));
	return 0;
}

int add(int a, int b)
{
	return a + b;
}
int subtract(int a, int b)
{
	return a - b;
}
int multiplicate(int a, int b)
{
	return a * b;
}
int divide(int a, int b)
{
	return a / b;
}