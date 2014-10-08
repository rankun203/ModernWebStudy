#include <stdio.h>

int isCompN(int n)
{
	int j, tmp;
	for(j=2; j<n; j++)
	{
		tmp = n / j;
		if(tmp * j == n)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int i;
	scanf("%d", &i);
	
	if(i <= 1)
	{
		puts("Please input a number lager than 1.");
		exit(1);
	}
	
	if(!isCompN(i))
		printf("%d is a prime number.\n", i);
	else
		printf("%d is a composite number.\n", i);
	
	return 0;
} 
