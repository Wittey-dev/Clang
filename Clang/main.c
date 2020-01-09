//
//  main.c
//  Clang
//
//  Created by Wittey on 2019/12/12.
//  Copyright © 2019 Wittey. All rights reserved.
//

#include <stdio.h>
#include <float.h>
// #define PRAISE "You are an extraodinary being."


int main(int argc, const char * argv[]) {
    // insert code here...
    double x = 1.0 / 3.0;
    float y = 1.0 / 3.0;
    printf("%.6f\n%.12f\n%.16f\n", x, x, x);
    printf("%.6f\n%.12f\n%.16f\n", y, y, y);
    if(x == DBL_DIG){printf("x equals DBL_DIG.");}
    if(y == FLT_DIG){printf("y equals FLT_DIG.");}
    // printf("\bStarted by the sudden sound, Sally shouted, \n\"By the Great Pumpkin, what was that!\"\n");
}

