/******************************************************************************

5. Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.

*******************************************************************************/

#include <stdio.h>
int first(int a[],int n);
int main()
{
    int n,b;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    b=first(a,n);
    if(b==0)
    printf("NO adjacent duplicate present in this given array\n");
    else
    printf("First occurrence of adjacent duplicate value in the array is : %d",b);

    return 0;
}
int first(int a[],int n)
{
  int i;
  printf("Enter the array elements :");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
  {
      if(a[i]==a[i+1])
      return a[i];
  }
    if(i==n-1)
    {
     return 0;
    }

}
