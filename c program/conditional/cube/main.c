/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int i,n,sum=0;
    printf("enter number :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        sum+=i;
        printf("number is :%d",i);
        printf(" and cube of these :%d\n",i*i*i);
    }
}
    
    
