/******************************************************************************
1. Write a function to find the greatest number from the given array of any size. (TSRS)
*******************************************************************************/

#include <stdio.h>
int greatest(int [],int );
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    printf(" Grestest number of this given array is : %d ",greatest(a,n));
    
    return 0;
}
int greatest(int a[],int n)
{ int tem;
    printf("Enter the array elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   tem=a[0];
    for(int i=1;i<n;i++)
    {
        if(tem<a[i])
        tem=a[i];
    }
    return tem;
}
