#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getMemory(char *p)
{
  p = (char *)malloc(100);
}

int main()
{
  char *str = NULL;
  getMemory(str);
  strcpy(str, "hello");
  printf("%s\n", str);
  return 0;
}
