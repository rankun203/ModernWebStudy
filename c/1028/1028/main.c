//
//  main.c
//  1028
//
//  Created by Kun on 10/28/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include <stdio.h>

//  交换两个变量
int exchange(int *a, int *b);

int main(int argc, const char * argv[]) {
    int a=1, b=2;
    
    printf("Before: a=%d, b=%d\n", a, b);
    
    exchange(&a, &b);
    
    printf("After : a=%d, b=%d\n", a, b);
    
    return 0;
}

int exchange(int *a, int *b)
{
    int tmp;
    
    tmp = *b;
    *b = *a;
    *a = tmp;
    
    return 0;
}
