//
//  main.c
//  ifElseChallenge
//
//  Created by Cordavi on 1/3/16.
//  Copyright © 2016 Cordavi. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int i = 20;
    int j = 25;
    int k = (i > j) ? 10 : 5;
    
    if (5 < j - k) { //First expression
        printf("This first expression is true.");
    } else if (j > i) { //Second expresion
        printf("The second expression is true.");
    } else {
        printf("Neither expression is true.");
    }
}
