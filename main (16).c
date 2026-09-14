/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int n,count;
count=0;
printf("enter a number");
scanf("%d" ,&n);
while(n>0){
    n=n/10;
    count++;
}
printf("the number of digits is %d" ,count);
    return 0;
}