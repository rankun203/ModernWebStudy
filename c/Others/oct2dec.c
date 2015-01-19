#include <stdio.h>
#include <string.h>

int main()
{
	char *t, s[8];
	int n;
	t = s;
	gets(t);
	n = t;
	while(t != '\0')
		n = n * 8 + *t - '0';
	printf(" %d\n", n);
	return 0;
}