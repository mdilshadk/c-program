/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[]={5,6,7,8,9,10,12,3,6,5,7,8,6,9,14,24,22,4,98};
    int n=sizeof(a)/sizeof(a[0]);
    int tv;
    int result=-1;
    
    printf("search index : ");
    scanf("%d",&tv);
    
    for(int i=0;i<=n;i++){
        if(a[i]==tv){
            result=i;
        }
    }
    
    if(result!=-1){
       printf("%dth index is %d",result,tv) ;
    }
    else{
        printf("data not found");
    }
   
    return 0;
}