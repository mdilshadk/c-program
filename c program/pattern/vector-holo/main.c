/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    for(int i=0;i<=10;i++){
        for(int j=i;j<=10;j++){
            printf(" ");
        }
        for(int k=0;k<=10;k++){
            
            if(i==0||i==10||k==0||k==10||k==10-i||k==i||k==5||i==5){
            printf(" *");
                }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}