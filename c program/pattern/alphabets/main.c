/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            printf(" ");
            
        }
            for(int k=1;k<=4;k++){
            if(i==1||k==1||i==6||i&k==4||i==3){
            printf(" *");}
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}