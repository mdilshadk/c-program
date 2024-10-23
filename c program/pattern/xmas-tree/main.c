/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k;
    
    for(i=1;i<=6;i++){//first tree start
        for(j=i-9;j<=6;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            if(k==1||k==3||k==5){
            printf(" *");}
            
            else{
                printf(" 0");
            }
        }
        printf("\n");
    }//first tree end
    
    for(i=4;i<=10;i++){//second tree start
        for(j=i-5;j<=10;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            if(k==1||k==3||k==5||k==7||k==9){
            printf(" *");}
            
            else{
                printf(" +");
            }
        }
        printf("\n");
    }//second tree end
    
    
    for(i=8;i<=15;i++){//third tree start
        for(j=i;j<=15;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            if(k==1||k==3||k==5||k==7||k==9||k==11||k==13||k==15){
            printf(" 0");}
            
            else{
                printf(" +");
            }
        }
        printf("\n");
    }//third tree end
    
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            printf(" ");
        }
        for(k=1;k<=12;k++){
            printf(" |");
        }
        printf("\n");
    }
    
    return 0;
}