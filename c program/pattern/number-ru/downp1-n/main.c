/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=8;
    //printf("enter row");
    //scanf("%d",&a);
    
    for(int i=a;i>=1;i--){
        for(int j=i;j<=a;j++){
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf(" %d",i);
        }
        printf("\n");
    }

    return 0;
}