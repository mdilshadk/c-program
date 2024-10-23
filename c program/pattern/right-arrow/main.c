/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   int a=5;
    
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=a;k++){
            printf("*");
        }
        printf("\n");
    }
    
    
    for(int i=1;i<=a;i++){
        for(int j=i;j<=a;j++){
        printf(" ");
        }
        for(int k=1;k<=a;k++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}