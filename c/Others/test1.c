#include<stdio.h>
double fac(int m,int n)
{
   if (m<=1)
     return 1;
  else return m*fac(m,n-1);
}
main()
{
   int m,n,res;
   printf("please input two number: m,n\n");
   scanf("%d%d",&m,&n);
   res=fac(m,n);
   printf("%d的%d次方为%d\n",m,n,res);
}
