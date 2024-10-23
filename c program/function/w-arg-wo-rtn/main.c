/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void sum(int,int);
void sub(int,int);
void mul(int,int);
void divi(float,float);
void main()
{
    int a,b;
    printf("enter two number :");    
    scanf("%d%d",&a,&b);
    sum(a,b);
    sub(a,b);
    mul(a,b);
    divi(a,b);
}
void sum(int a,int b){
    int sum=a+b;
    printf("sum %d",sum);
}
void sub(int a,int b){
    int sub=a-b;
    printf("\nsub %d",sub);
}
void mul(int a,int b){
    int mul=a*b;
    printf("\nmul %d",mul);
}
void divi(float a,float b){
    float divi=a/b;
    printf("\ndiv %.2f",divi);
}