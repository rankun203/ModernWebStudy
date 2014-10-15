#include <stdio.h>
#include <stdlib.h>

int isCompN(int n)
{
	int j;
	for(j=2; j<n; j++)
	{
    
		if(n % j == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int i;
  printf("Please input an Integer: ");
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
