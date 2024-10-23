/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void sumn();

void main(){
    printf("call function\n");
    sumn();
}

void sumn(){
    int i,sum=0;
    for(i=1;i<=10;i++){
        printf("%d ",i);
        sum+=i;
        }
        printf("\nsum is %d",sum);
    
}