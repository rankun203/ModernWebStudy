#include <stdio.h>

int main()
{
	long i, n, f;
	printf("Please input a number: ");
	scanf("%d", &n);

	f = n;
	for(i=n-1; i>0; i--)
	{
		printf("%d", i+1);
		f = f * i;
		if(i!=1)
			printf("x");
	}

	printf("x1=%d\n", f);
	
	return 0;
}
