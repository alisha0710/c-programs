/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int x,n,rev,y;
rev=0;
printf("enter a number");
scanf("%d" ,&n);
y=n;
while(n>0){
    x=n%10;
    rev=rev*10+x;
    n=n/10;
}
if(y==rev){
    printf("given number is a palindrome");
}
else{
    printf("given number is not a palindrome");
}
    return 0;
}