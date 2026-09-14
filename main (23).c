/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int x,n;
printf("enter a number" );
scanf("%d" ,&n);
x=n%10;
printf("the last digit is  %d" ,x);
    return 0;
}