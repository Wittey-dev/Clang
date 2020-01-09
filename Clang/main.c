//
//  main.c
//  Clang
//
//  Created by Wittey on 2019/12/12.
//  Copyright © 2019 Wittey. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraodinary being."

int years_to_days(int years);

int main(int argc, const char * argv[]) {
    // insert code here...
    char name[40];
    printf("What is your name? ");
    //scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("%zd %zd \n", strlen(PRAISE), sizeof(PRAISE));
    // printf("\bStarted by the sudden sound, Sally shouted, \n\"By the Great Pumpkin, what was that!\"\n");
}
