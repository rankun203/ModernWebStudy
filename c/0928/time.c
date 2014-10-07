/**
 * Digital clock.
 * @author rankun203@gmail.com
 */

#include <stdio.h>
#include <time.h>
#include <locale.h>

/**
 * Save current time to a given array.
 */
int gettime (int * mytime);

int main()
{
	int i, j, k, mytime[3], chour, cmin, csec;
    gettime(mytime);
    
    chour = mytime[0];
    cmin = mytime[1];
    csec = mytime[2];
 	
	for(i=chour; i<24; i++)
	{
		for(j=cmin; j<60; j++)
		{
			for(k=csec; k<60; k++)
			{
				printf("%d:%d:%d", i, j, k);
				sleep(1);
				system("cls");
			}
			csec = 0;
		}
		cmin = 0;
	}
}

int gettime (int * mytime) {
	char buff[70];
	
	time_t rawtime;
	
	//tm->ref: http://stackoverflow.com/questions/13658756/example-of-tm-use
	struct tm *timeinfo;
	
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	
	mytime[0] = timeinfo->tm_hour;
	mytime[1] = timeinfo->tm_min;
	mytime[2] = timeinfo->tm_sec;
	return 0;
}

