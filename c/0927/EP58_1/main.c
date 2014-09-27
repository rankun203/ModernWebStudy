#include <stdio.h>

int main()
{
	float height = 1.5, width = 2.3, area, around;
	area = height * width;
	around = (height + width) * 2.0;
	printf("The area of the rect is: %f\n", area);
	printf("The around of the rect is: %f\n", around);
	return 0;
}