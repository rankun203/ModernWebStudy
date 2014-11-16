//
//  main.c
//  structure
//
//  Created by Kun on 11/16/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include <stdio.h>

struct student
{
    int num;
    char name[10];
    float score;
};

int printStus(struct student stu[], int len)
{
    int i;
    printf("\n");
    for (i=0; i<len; i++) {
        struct student stuTmp = stu[i];
        printf("%d %10s %8.1f\n", stuTmp.num, stuTmp.name, stuTmp.score);
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
    struct student stu[3] = {{1, "rankun", 60.0}, {2, "kaboo", 70.0}, {3, "kart", 80.0}};
    
    printStus(stu, 3);
    
    stu[0].score = 85.0;
    
    printStus(stu, 3);
    
    printf("\n");
    return 0;
}
