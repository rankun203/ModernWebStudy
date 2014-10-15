#include <stdio.h>

/*
 Author: rankun203@gmail.com
 Purpose: Evaluate the sum of a series of fractions.
 */ 

/*

 */
double sum(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%lf", 1 - sum(n));
	return 0;
}

double sum(int n)
{
	double tmp;
	if(n == 2)
		return 0.5;
	tmp = 1 / (double)n + sum(n - 1);
	return tmp; 
}

// 1 - 1/2 + 1/3 + 1/4 + 1/n
// 1/2 + 1/3 + 1/4
