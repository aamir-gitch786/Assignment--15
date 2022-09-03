/******************************************************************************

6. Write a function in C to read n number of values in an array and display it in reverse
order.

*******************************************************************************/

#include <stdio.h>
int reverse(int a[],int n);
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    reverse(a,n);

    return 0;
}
int reverse(int a[],int n)
{
  int i,tem;
  printf("Enter the array elements :");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n/2;i++)
  {
      tem=a[i];
      a[i]=a[n-1-i];
      a[n-1-i]=tem;
  }
  printf("Reverse array :");
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
}