/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int n,x;
printf("entera number");
scanf("%d" ,&n);
while(n>0){
    x=n%10;
    if(x%2==0){
        printf("%d" ,x);
    }
    n=n/10;
}
    return 0;
}