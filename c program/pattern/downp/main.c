/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   
    int a;
    printf("Enter a number to define the rows :");
    scanf("%d",&a);
    
    for(int i=1;i<=a*2;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=i;k<=a*2;k++){
            printf(" *");
        }
    
        printf("\n");
    }
    

    return 0;
}