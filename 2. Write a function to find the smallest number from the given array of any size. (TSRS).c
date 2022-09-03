/******************************************************************************
2. Write a function to find the smallest number from the given array of any size. (TSRS)
*******************************************************************************/

#include <stdio.h>
#include<limits.h>
int smallest(int [],int );
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    printf(" Smallest number of this given array is : %d ",smallest(a,n));
    
    return 0;
}
int smallest(int a[],int n)
{ int tem=INT_MAX;
    printf("Enter the array elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(tem>a[i])
        tem=a[i];
    }
    return tem;
}