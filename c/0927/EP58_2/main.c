#include <stdio.h>

char lower_case(char c);

int main()
{
	char c = 'A', lower_c;
	lower_c = lower_case(c);
	printf("Lower case of %c is: %c\n", c, lower_c);
	return 0;
}

char lower_case(char c)
{
	return ((char)(c + 32));
}
