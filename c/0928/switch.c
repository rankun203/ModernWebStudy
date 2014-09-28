#include <stdio.h>

int main()
{
	int season;
	printf("Input a season number: ");
	scanf("%d", &season);
	
	printf("The season is: ");
	
	switch(season){
		case 1:
		case 2:
		case 3: printf("Spring");	break;
		case 4:
		case 5:
		case 6: printf("Summer");	break;
		case 7:
		case 8:
		case 9: printf("Autumn");	break;
		case 10:
		case 11:
		case 12: printf("Winter");	break;
	}
	
	getch();

	return 0;
}
