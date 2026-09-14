/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int i,n,count;
count=0;
printf("enter a number");
scanf("%d" ,&n);
for(i=1;i<=n;i++){
    if(n%i==0){
        count++;
    }
}
if(count==2){
    printf("given number is a prime number");
}
else{
    printf("given number is not a prime number");
}
    return 0;
}