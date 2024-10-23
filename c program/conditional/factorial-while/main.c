/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int i=1,fact=1;
    
    while(i<=5){
        printf(" %d",i);
        fact*=i;
        i++;}
        printf("\nfact is %d",fact);
    
}