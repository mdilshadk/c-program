/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void area();

void main(){
    area();
}

void area(){
    int b=10,h=8,area;
    //printf("enter base and hight");
    //scanf("%d%d",&b,&h);
    
    area=0.5*b*h;
    printf("area is %d",area);
}