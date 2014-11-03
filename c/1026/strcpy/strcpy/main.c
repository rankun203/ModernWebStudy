//
//  main.c
//  strcpy
//
//  Created by Kun on 10/26/14.
//  Purpose: Write a function to copy a char array.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include <stdio.h>
#include <string.h>

// 复制 s2 到 s1 中
int _strcpy(char s1[], char s2[]);

int main(int argc, const char * argv[]) {
    char s1[20], s2[]="My Array";

    _strcpy(s1, s2);
    
    printf("S1= %s\n", s1);
    return 0;
}

int _strcpy(char s1[], char s2[])
{
    char i;
    
    i=0;
    do {
        s1[i] = (char)s2[i];
        i++;
    } while ((char)s2[i] != '\0');
    
    return 0;
}
