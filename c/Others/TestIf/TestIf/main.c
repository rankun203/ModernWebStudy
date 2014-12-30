//
//  main.c
//  TestIf
//
//  Created by Kun on 12/8/14.
//  Copyright (c) 2014 Kun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a=1, b=0;
    if(!a) b++;
    else if (a==0)
        if (a)
            b += 2;
        else
            b += 3;
    printf("%d\n", b);
    
    return 0;
}
