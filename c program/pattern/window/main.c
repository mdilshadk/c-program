/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,k,a=10;
    for(i=0;i<=a;i++){
        for(j=0;j<=a;j++){
            
            if(i==0||i==5||i==a||j==0||j==5||j==a){
            printf(" *");}
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}