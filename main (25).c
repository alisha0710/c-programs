/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int x,n,sum;
sum=0
printf("enter a number");
scanf("%d" ,&n);
while(n>0){
    x=n%10;
    if(x%2=0){
        sum=sum+x;
    }
    n=n/10;
}
printf("the sum of evn digits of given numebr is %d" ,sum);
    return 0;
}