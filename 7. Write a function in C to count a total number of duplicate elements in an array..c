/******************************************************************************

7. Write a function in C to count a total number of duplicate elements in an array.

*******************************************************************************/

#include <stdio.h>
int count(int a[],int n);
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
   printf("Total number of duplicate elements in an array is : %d",count(a,n));

    return 0;
}
int count(int a[],int n)
{
  int i,count_number=0,j;
  printf("Enter the array elements :");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
         if(a[i]!=-1 && a[i]==a[j])
         {
             count_number++;
             a[j]=-1;
         }
      }
  }
 return count_number;
}
