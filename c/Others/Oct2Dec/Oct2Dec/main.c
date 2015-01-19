//
//  main.c
//  Oct2Dec
//
//  Created by Kun on 1/9/15.
//  Copyright (c) 2015 Kun. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char *t, s[8];
    int n;
    t = s;
    gets(t);
    n = *t-'0';
    while(*(++t) != '\0')
        n = n * 8 + *t - '0';
    printf(" %d\n", n);
    return 0;
}