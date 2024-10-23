/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j;
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
        
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}