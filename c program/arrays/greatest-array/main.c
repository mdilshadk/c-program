/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[]={7,5,3,6,4,9};
    int minvalue=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        if(minvalue<arr[i]){
            minvalue=arr[i];
        }
    }
    printf("gratest is %d",minvalue);

    return 0;
}