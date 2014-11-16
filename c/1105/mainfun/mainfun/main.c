//
//  main.c
//  mainfun
//
//  Created by Kun on 11/5/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getMemory(char *p) {
    p = (char *)malloc(100);

}

int main(int argc, const char * argv[]) {
    char *str = NULL;
    getMemory(str);
//    str = (char *)malloc(100);
    strcpy(str, "hello");
    printf("%s\n", str);
    free(str);
    return 0;
}
