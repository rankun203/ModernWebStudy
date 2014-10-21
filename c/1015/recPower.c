#include <stdio.h>

/*
 Author: rankun203@gmail.com
 Purpose: Use recursion to evaluate a number to the power of another number.
 */

/*
 Evaluate a to the power of b.
 */
int power(int a, int b);

int main()
{
	int a, b;
	printf("Input 2 numbers divided by a comma(,): ");
	scanf("%d, %d", &a, &b);
	
	printf("%d to the power of %d equals: %d", a, b, power(a, b));
	
	return 0;
} 

int power(int a, int b)
{
  if(a == 0)
    return 0;
  if(b == 0)
    return 1;
	if(b == 1)
		return a;
	return a * power(a, --b);
}

