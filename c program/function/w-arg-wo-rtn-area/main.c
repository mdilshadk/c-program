/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void area(int,int);

void main()
{
    int b=10,h=8;
    //printf("enter two number :");    
    //scanf("%d%d",&b,&h);
    area(b,h);
}
void area(int b,int h){
    int area=0.5*b*h;
    printf("area is %d",area);
}