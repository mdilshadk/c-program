/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j=9,sum=0;
    printf("input the number : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
       sum+=j;
        j=j*10+ 9;
        printf("%d ",j);
        
       }
       
       printf("\nsum is %d",sum);

    return 0;
}