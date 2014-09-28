#include <stdio.h>
#include <conio.h>

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
		if(1 <= season && season <= 3)
			printf("Spring");
		else if (4 <= season && season <= 6)
			printf("Summer");
		else if (7 <= season && season <= 9)
			printf("Fall");
		else
			printf("Winter");
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

