/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int sum();
void main()
{
    int a,b;
    printf("enter two number :");
    scanf("%d%d",&a,&b);
    sum(a,b);
    int res;
    res=sum();
    printf("sum is %d",res);
}
int sum(int a,int b){
    
    return a+b;
}