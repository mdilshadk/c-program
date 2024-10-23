/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int i,n,e;
    
    printf("enter table number ends: ");
    scanf("%d",&n);
    
    for(i=1;i<=10;i++){
        for(e=1;e<=n;e++){
            printf("%dx%d=%d\n",i,e,i*e);
        }
        
    }
        
}
