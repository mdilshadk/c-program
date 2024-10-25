/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[]={9,6,5,8,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array is :");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    
    int target=6;
    int result=-1;
    
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            result=i;
        }
    }
    if(result!=-1){
        printf("\n%dth index is: %d",result,target);
    }
    else{
        printf("not found");
    }
    return 0;
}