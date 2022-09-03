/******************************************************************************

5. Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.

*******************************************************************************/

#include <stdio.h>
int first(int a[],int n);
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    printf("First occurrence of adjacent duplicate value in the array is : %d",first(a,n));

    return 0;
}
int first(int a[],int n)
{
  int i;
  printf("Enter the array elements :");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
      if(a[i]==a[i+1])
      return a[i];
  }
}