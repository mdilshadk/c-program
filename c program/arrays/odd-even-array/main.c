/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int oddindex=0;
    int evenindex=0;
    int odd[10]; 
    int even[10];
    
    int arr[]={4,5,6,3,8,13,18,15};
    int min=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
       
        if(arr[i]%2==0){
            even[evenindex]=arr[i];
            evenindex++;
           
    } 
    else{
        
        odd[oddindex]=arr[i];
        oddindex++;
        
        }
    }printf("odd :");
    for(int i=0;i<oddindex;i++){
        printf(" %d",odd[i]);
    }
    printf("\n");
    printf("even :");
    for(int i=0;i<evenindex;i++){
        printf(" %d",even[i]);
    }
    
    return 0;
}
