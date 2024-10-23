/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Input number of terms : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        
        printf("%d",2*i- 1);
        sum+=2*i- 1;
    }
     printf("\nsum is %d",sum); 
    return 0;
}