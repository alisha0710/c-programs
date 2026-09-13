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
    for(i=1;i<n;i++){
        if(i%2==0){
            count++;
        }
    }
printf(" the number of odd numbers from 1-%d is %d:\n" ,n,count);
    return 0;
}