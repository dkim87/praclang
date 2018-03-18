//
//  main.c
//  xcode_test
//
//  Created by Deon Kim on 2018-02-18.
//  Copyright © 2018 dqgthb. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");

    double a,b;
    a = 1; b = 2;
    int i;

    for (i = 1; a <= b; i++, a+=0.01) {
        printf("%d trial: %g\n", i, a);
        
    }
    return 0;
}
