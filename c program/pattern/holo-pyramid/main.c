/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    
    for(int i=1;i<=8;i++){    
    for(int j=i;j<=8;j++){ 
        printf("  ");
    
    }   
    for(int k=1;k<=i*2- 1;k++)
    {
        if(i==1||i==8||k==1||k==i*2- 1){
        printf("* ");
        }
        else{
            printf("  ");
        }
        
    }
    
    printf("\n");
  }


    return 0;
}