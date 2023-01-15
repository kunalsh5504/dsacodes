/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>  
 
int partition(int a[],int s,int e)  
{  
    int pivot=a[e];  
    int i=(s-1);  
  
    for(int j=s;j<=e-1;j++)  
    {  
          
        if(a[j]<pivot)  
        {  
            i++; 
            int t=a[i];  
            a[i]=a[j];  
            a[j]=t;  
        }  
    }  
    int t=a[i+1];  
    a[i+1]=a[e];  
    a[e]=t;  
    return(i+1);  
}  
  
  
void quick(int a[],int s,int e)   
{  
    if (s<e)  
    {  
        int p=partition(a,s,e);  
        quick(a,s,p-1);  
        quick(a,p+1,e);  
    }  
}  
  
  
void printArr(int a[],int n)  
{  
    int i;  
    for (i=0;i<n;i++)  
        printf("%d ",a[i]);  
}  
int main()  
{  
    int a[] = { 3,67,34,12,87,45 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting  \n");  
    printArr(a, n);  
    quick(a, 0, n - 1);  
    printf("\nAfter sorting  \n");    
    printArr(a, n);  
      
    return 0;  
}  