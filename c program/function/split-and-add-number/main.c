/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum=0,l,f;
    printf("enter a number :");
    scanf("%d",&n);
    
    l=n%10;
    f=n/10;
    sum=l+f;

    int r=sum%10;
    int re=sum/10;
    int res=r+re;
    printf("%d",res);
        
    return 0;
}