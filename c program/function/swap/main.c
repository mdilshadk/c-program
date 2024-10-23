        /******************************************************************************\

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

        /*******************************************************************************/

#include <stdio.h>
void bswap();
void aswap();
void main(){
    int a=5,b=10;
    //printf("enter two number :");
    //scanf("%d%d",&a,&b);
    bswap(a,b);
    aswap(a,b);
}
void bswap(int a,int b){
    a=a;
    b=b;
    printf("before swap : a=%d,b=%d,",a,b);
}
void aswap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("\nafter swap : a=%d,b=%d,",a,b);
}