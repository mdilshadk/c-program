/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int a=5;
    
    for(int i=1;i<=a;i++){
        for(int j=i;j<=a;j++){
        printf(" ");
        }
        for(int k=1;k<=a;k++){
            printf("*");
        }
        printf("\n");
    }
    
    
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=a;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
