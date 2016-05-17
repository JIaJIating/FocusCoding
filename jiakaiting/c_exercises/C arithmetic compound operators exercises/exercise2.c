#include <stdio.h>
#include <stdlib.h>

/*************************************************************************

* Author: jiakaiting
* Purpose: Write a C program to produce the output as shown below:
* Results:
* x value             y value        expressions            results
* 10      |               5        |         x+=y       |       x=15
* 10      |               5        |         x-=y-2     |       x=7
* 10      |               5        |         x*=y*5     |       x=250
* 10      |               5        |         x/=x/y     |       x=5
* 10      |               5        |         x%=y       |       x=0
* CreatedTime: 17/5/2016
***************************************************************************/

int main(int argc, char*argv[])
{
    int x = 10;
    int y = 5;
    printf("Result:\n");
    printf("x value\ty value\t expressions\t results\n");
    printf("%d",x);printf("   |\t %d",y);printf("   |\t x+=y\t \t| x=%d",x+y);printf("\n");
    printf("%d",x);printf("   |\t %d",y);printf("   |\t x-=t-2\t \t| x=%d",x-y+2);printf("\n");
    printf("%d",x);printf("   |\t %d",y);printf("   |\t x*=y*5\t \t| x=%d",x*y*5);printf("\n");
    printf("%d",x);printf("   |\t %d",y);printf("   |\t x/=x/y\t \t| x=%d",x/(x/y));printf("\n");
    printf("%d",x);printf("   |\t %d",y);printf("   |\t x=x mod y\t| x=%d",x%y);printf("\n");

    return 0;

}
