//
//  main.c
//  1021
//
//  Created by Kun on 10/21/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[8] = {48, 37, 64, 97, 75, 12, 26, 49};
    int i, j, t;
    for (i=1; i<=6; i++) {
        for (j=1; j<=7-i; j++) {
            if (a[j]>a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("排序后的数组元素为：\n");
    for (i=1; i<=7; i++) {
        printf(" %d ", a[i]);
    }
    printf("\n");
    return 0;
}
