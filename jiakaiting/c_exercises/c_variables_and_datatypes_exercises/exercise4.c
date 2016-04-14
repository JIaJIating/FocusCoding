#include <stdio.h>
#include <stdlib.h>

/************************************************
* @Author: Jiakaiting
* @Brief: Write a C program to prompt the user to input
* her/his age and print it on the screen.
* as shown below:
* Your age is 20 years old.
* @CreatedTime: 14/4/16.
*************************************************/

int main(int argc,char *argv[])
{
    int age;
    printf("Enter your age.\n");
    scanf("You are %2d",age);
    printf("years old.\n");
    return 0;
}
