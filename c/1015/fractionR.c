#include <stdio.h>

int sumI(int a, int b, int* rtn[]);

int main()
{
  int a, b;
  int rtn[2];
  printf("Please input 2 Numbers(,): ");
  scanf("%d, %d", &a, &b);
  
  sumI(a, b, &rtn);
  
  printf("%d,,", rtn[0]);
}

int sumI(int a, int b, int* rtn[])
{
  rtn[0] = a;
  return 0;
}
