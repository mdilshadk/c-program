/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include <stdio.h>

int sum();

void main(){
    int result;
    result=sum();
    printf("result is %d",result);
}

int sum(){
    int a,b;
    printf("enter a number :");
    scanf("%d%d",&a,&b);
    
    return a+b;
}