/*
project: Quadratic Equation Solution
Author:  Imran Charles
Date:     26th oct, 2021
Complier: GCC
Language: C99
license: MIT

INPUTS -> a,b,c
OUTPUTS -> x1,x2
*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // variable declaration
    int a,b,c;
    float x1,x2;

    // capture input
    printf("\tQuadratic Equation Solver!\n");
    printf("Enter the values a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);

    // processing/computation
    if((b*b-4*a*b*c) == 0) {
        x1 = x2 = (-b + sqrt(b*b-4*a*c))/(2*a);

    }
     if((b*b-4*a*b*c) > 0) {
        x1 =  (-b + sqrt(b*b-4*a*c))/(2*a);
        x2 =  (-b - sqrt(b*b-4*a*c))/(2*a);

    }
     if((b*b-4*a*c) < 0) {
        printf("The Equation has no roots\n");
        exit(1);
     }

    // output
    printf("The values of x are %f and %f\n",x1,x2);
    return 0;
}
