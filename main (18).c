/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int x,n,count;
count=0;
printf("entera number");
scanf("%d" ,&n);
while(n>0){
    x=n%10;
    if(x%2==0){
        count++;
    }
    n=n/10;
}
printf("the number of even digits %d" ,count);
    return 0;
}