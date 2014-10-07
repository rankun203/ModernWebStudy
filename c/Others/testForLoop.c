#include <stdio.h>

int main()
{
	int num, con = 1;
	while(con == 1)
	{
		scanf("%d", &num);
		while ( getchar() != '\n' );
		if(num < 1)
		{
			printf("num < 1!\n");
			continue;
		}
		else
		{
			printf("num > 1\n");
			con = 0;
		}
	}
	return 0;
} 
