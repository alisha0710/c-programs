/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int n;
printf("enter a number");
scanf("%d" ,&n);
while(n>=10){
    n=n/10;
}
printf("the first digit of given number is %d" ,n);
    return 0;
}