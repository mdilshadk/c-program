/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int area();

void main(){
    int result;
    result=area();
    printf("area is %d",result);
}
int area(){
    int b=10,h=8;
   // printf("enter base and hight :");
    //scanf("%d%d",&b,&h);
    
    return 0.5*b*h;
    
}