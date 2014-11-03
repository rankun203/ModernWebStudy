//
//  main.c
//  1102
//
//  Created by Kun on 11/2/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include<stdio.h>
#include<string.h>

//本次作业很简单哦，只要求在这个函数体中使用指针，通过指针完成字符串拷贝函数的功能，而不使用数组名加下表的方式
//只修改本函数体，其他地方不要做任何修改
void mystrcpy(char dest[],char src[])
{
//    char *p = &src[0],
//         *q = &dest[0];

    char *p = src,
         *q = dest;

    while(*p!='\0')
    {
        *q = *p;
        p++; q++;
    }
    *q=(char)'\0';
}
int main()
{
    char a[10],s[10];
    printf("请输入一个字符串:");
    scanf("%s",s);
    mystrcpy(a,s);
    printf("%s\n",a);
    return 0;
}
