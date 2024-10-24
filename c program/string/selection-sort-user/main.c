/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("enter number of elements in array :");
    scanf("%d",&n);
    int a[n];
    printf("enter elements :");
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
    
    for(int i=0;i<n-1;i++){
        int mi=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mi]){
                mi=j;
                
            }
        }
    
    int mv=a[mi];
        for(int k=mi;k>i;k--){
            a[k]=a[k-1];
        }
        a[i]=mv;
    }
    printf("sorted array :");
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    printf("\n");
    
    return 0;
}