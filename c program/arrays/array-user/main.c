/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ab[5];
    printf("enter 5 numbers :");
    
    for(int i=0;i<5;i++){
        scanf("%d",&ab[i]);
    }
     for(int i=0;i<5;i++){
        printf("arr %d\n",ab[i]);
     }
}