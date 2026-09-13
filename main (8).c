/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

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
    printf("the total number of even numbers from 1 to %d is :%d\n" ,n,count);
    return 0;
}