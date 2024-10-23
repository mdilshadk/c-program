/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[]={9,6,5,3,2};
    int minvalue=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        if(minvalue>arr[i]){
            minvalue=arr[i];
        }
    }
    printf("smallest %d",minvalue);
    return 0;
}
