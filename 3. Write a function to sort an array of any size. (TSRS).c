/******************************************************************************
3. Write a function to sort an array of any size. (TSRS)
*******************************************************************************/
//actually pointer concepts is not discused yet so here i solve this problem by (TSRN).
#include<stdio.h>
#include<limits.h>
void sort(int [],int );
int main()
{
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    int a[n];
    sort(a,n);
}
void sort(int a[],int n)
{
    int i,tem=INT_MAX;
    printf("Enter elements of array :");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Sorted array is :");
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}