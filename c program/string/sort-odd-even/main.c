/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int oi=0;
    int ei=0;
    int odd[10];
    int even[10];
    
    int a[]={21,12,10,15,2,33,48,5,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even[ei]=a[i];
            ei++;
        }
        else{
            odd[oi]=a[i];
            oi++;
        }
    }
    printf("odd :");
    for(int i=0;i<oi;i++){
        printf(" %d",odd[i]);
    }
    printf("\neven :");
    
    for(int i=0;i<ei;i++){
        printf(" %d",even[i]);
    }
    
    int ev[]=even[i];
    int ne=sizeof(ev)/sizeof(ev[0]);
    for(int i=0;i<ne;i++){
        for(int j=0;j<ne-i-1;j++){
            if(ev[j]>ev[j+1]){
                int temp=ev[j];
                ev[j]=ev[j+1];
                ev[j+1]=temp;
            }
            
        }
    }
    for(int i=0;i<ne;i++){
        printf(" %d",ev[i]);
    return 0;
}