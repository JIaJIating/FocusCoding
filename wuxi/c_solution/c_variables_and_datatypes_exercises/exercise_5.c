#include <stdio.h>
#include <stdlib.h>
/*****************************************************************
* @Author: wuxi
* @Brief:Exercise 5: Write a C program to prompt the user to input
* 3 integer values and print these values in forward and reversed
* order, as shown below.
* then prints these values on the screen.
* Please enter your 3 numbers:
* @CreatedTime: 20/4/16.
******************************************************************/


 int main(int argc, char *argv[])
 {
    int val1;
    int val2;
    int val3;
    printf("Please enter your 3 numbers:");
    scanf("%d %d %d",&val1,&val2,&val3);

    printf("\nYour numbers forward:\n");
    printf("%d",val1);printf("\n");
    printf("%d",val2);printf("\n");
    printf("%d",val3);printf("\n");
    printf("Your numbers reversed:\n");
    printf("%d",val3);printf("\n");
    printf("%d",val2);printf("\n");
    printf("%d",val1);printf("\n");


    return 0;
 }
