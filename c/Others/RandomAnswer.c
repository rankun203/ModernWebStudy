#include<time.h>
#include<stdlib.h>
#include<stdio.h>
 
 
int  main()
{
  int i,j;
  // srand((int)time(0));
  for(i=0;i<10;i++)
  {
    printf("%d",rand()%4);
  }
  return 0;
}

