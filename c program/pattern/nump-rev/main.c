/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
    int a=8;
    for(int i=1;i<=a;i++){
        for(int j=i;j<=a;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int l=i-1;l>=1;l--){
            printf("%d",l);
        }
            
       printf("\n");
    }
    
    

    
    return 0;
}