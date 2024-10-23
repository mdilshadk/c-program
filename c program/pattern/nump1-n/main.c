/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=8,n=1;
    //printf("enter row : ");
    //scanf("%d",&a);
    
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf(" %d",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}