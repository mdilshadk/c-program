/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int i,j,k;
    
    for(i=1;i<=6;i++){
        for(j=1;j<=6;j++){
            printf(" ");
            }
        for(k=1;k<=6;k++){
            if(k==1||i==1||i==6||k&i==2||k==6-i+1){
            printf(" *");}
            else{
                printf("  ");
            }
        }
    printf("\n");
    }
    return 0;
}