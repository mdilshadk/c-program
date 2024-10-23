/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void sum();
void mul();
void main(){
    printf("call function\n");
    sum();
    mul();
}
    
void sum(){
    int a,b,sum;
    printf("enter two number :");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("%d",sum);
}

void mul(){
    int a,b,mul;
    printf("enter two number :");
    scanf("%d %d",&a,&b);
    mul=a*b;
    printf("%d",mul);
}