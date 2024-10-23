/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[]={1,13,0,121,163,451};
    int n=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+ 1]){
                int temp=a[j];
                a[j]=a[j+ 1];
                a[j+ 1]=temp;
            }
        }
            
    }
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    

    return 0;
}