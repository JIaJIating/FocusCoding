#include <stdio.h>
#include <stdlib.h>
/*****************************************************************
* @Author: wuxi
* @Brief:Exercise 4: Write a C program to prompt the user to input
* her/his age and print it on the screen, as shown below.
* then prints these values on the screen.
* Enter your age:
* @CreatedTime: 20/4/16.
*******************************************************************/

 int main(int argc, char *argv[])
 {
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("You are %2d ",age);
    printf(" years old.\n");


    return 0;
 }
