/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50]={"hello"},str2[50]={"hellu"},str3[50];
    
    printf("length of str1 :%zu\n",strlen(str1));//length of string
    
    strcpy(str3,str1);//copy to another string
    printf("\ncopied value of str1 to str 3 :%s\n",str3);
    
    strcat(str1,str2);//connect two string
    printf("\nconnect str1 and str 2 :%s",str1);
    
    int result=strcmp(str1,str2);//compare two strings
       printf("\n");
        if(result>0){
            printf("equal");
        }
        else{
            printf("not equal");
        }
    
    
    return 0;
}