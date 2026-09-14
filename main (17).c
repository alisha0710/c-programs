/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int product,x,n;
product=1;
printf("entera number");
scanf("%d" ,&n);
while(n>0){
    x=n%10;
    product=product*x;
    n=n/10;
}
printf("product of digits is %d" ,product);
    return 0;
}