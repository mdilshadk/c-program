/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int area();
void main()
{
    int b,h;
    printf("enter base and hight :");
    scanf("%d%d",&b,&h);
    area(b,h);
    int res;
    res=area();
    printf("area is %d",res);
}
int area(int b,int h){
    
    return 0.5*b*h;
}