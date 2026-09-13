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
    printf("enter a number ");
    scanf("%d" ,&n);
    for(i=1;i<n;i++){
        if(i%3==0 && i%5==0){
            count++;
        }
    }
    printf("the number of numbers divisible by 3 and 5 between 1 to %d is %d" ,n,count);

    return 0;
}