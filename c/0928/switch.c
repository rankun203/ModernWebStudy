#include <stdio.h>

/**
 * @author rankun203@gmail.com
 * Convert a number to Season Name with if statements.
 */

/**
 * check if season number is correct.
 */
int check_season(int s);

int main()
{
	int season;
	printf("Input a season number: ");
	scanf("%d", &season);
	if (check_season(season) == 0) {
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
	} else {
		printf("Input Error: Input should be an Integer between 1 and 12.");
	}
	
	getch();

	return 0;
}

int check_season(int s)
{
	if(s < 1 || s > 12)
		return -1;
	return 0;
}

