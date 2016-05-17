#include <stdio.h>
#include <stdlib.h>

/**********************************************************************************

* Author: JiaKaiting
* Purpose: Write a C program to produce the output as shown below:                *
* Results:	                                                                      *
* x value                 y value              expressions           results      *
* 10      |                  5        |         x=y+3            |     x=8        *
* 10      |                  5        |         x=y-2            |     x=3	      *
* 10      |                  5        |         x=y*5            |     x=25       *
* 10      |                  5        |         x=x/y            |     x=2	      *
* 10      |                  5        |         x=x%y            |     x=0	      *
* CreatedTime: 15/5/2016

***********************************************************************************/

int main(int argc, char *argv[])
{
    int x;
    int y;
    x = 10;
    y = 5;

    printf("Result:\n");
    printf("x value\ty value\t expressions\t results\n");
    printf("%d",x);printf("   |\t %d",y);printf("   |\t x=y+3\t \t| x=%d",y+3);printf("\n");
    printf("%d",x);printf("   |\t %d",y);printf("   |\t x=y-2\t \t| x=%d",y-2);printf("\n");
    printf("%d",x);printf("   |\t %d",y);printf("   |\t x=y*5\t \t| x=%d",y*5);printf("\n");
    printf("%d",x);printf("   |\t %d",y);printf("   |\t x=x/y\t \t| x=%d",x/y);printf("\n");
    printf("%d",x);printf("   |\t %d",y);printf("   |\t x=x mody\t| x=%d",x%y);printf("\n");

    return 0;

}

