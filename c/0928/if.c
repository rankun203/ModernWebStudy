#include <stdio.h>
#include <conio.h>

int main()
{
	int season;
	printf("Input a season number: ");
	scanf("%d", &season);
	
	printf("The season is: ");
	
	if(1 <= season && season <= 3)
		printf("Spring");
	else if (4 <= season && season <= 6)
		printf("Summer");
	else if (7 <= season && season <= 9)
		printf("Fall");
	else
		printf("Winter");
	
	getch();
	return 0;
}
