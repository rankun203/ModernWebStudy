//
//  main.c
//  strlen
//
//  Created by Kun on 10/26/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include <stdio.h>

// 返回该数组的长度
int _strlen(char str[]);

int main(int argc, const char * argv[]) {
    
    int len;
    static char s[] = "It is";
    len = _strlen(s);
    
    printf("Length of s is %d\n", len);
    
    return 0;
}

int _strlen(char str[])
{
    int i=0, len=0;
    while ('\0' != str[i]) {
        len++;
        i++;
    }
    return len;
}