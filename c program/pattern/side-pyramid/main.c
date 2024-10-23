/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{   
    int a;
    printf("enter the number defined the column :");
    scanf("%d",&a);
    
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
          printf(" *");
        }
        
    printf("\n");
    }
        
     
     for(int i=1;i<=a;i++){   
        for(int k=i;k<=a- 1;k++){
            printf(" *");
        
        }
        printf("\n");
    }

    return 0;
}