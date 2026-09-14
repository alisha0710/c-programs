/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int n,x,count;
count=0;
printf("enter a number");
scanf("%d" ,&n);
while(n>0){
    x=n%10;
    if(x==0){
        count++;
    }
    n=n/10;
}
printf("the number of zeroes in given number are %d" ,count);
    return 0;
}