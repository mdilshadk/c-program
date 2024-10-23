/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i=1,mul=1,n;
    printf("enter a number :");
    scanf("%d",&n);
    do{
        printf("%dx%d :%d\n",i,n,n*i);
        i++;
    }
    while(i<=10);

    return 0;
}