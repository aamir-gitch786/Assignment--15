/******************************************************************************

8. Write a function in C to print all unique elements in an array.

*******************************************************************************/

#include <stdio.h>
void unique(int a[],int n);
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    
   
   unique(a,n);
    return 0;
}
void unique(int a[],int n)
{
  int i,c,j;
  printf("Enter the array elements :");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  for(i=0;i<n;i++)
  {
      c=0;
      for(j=0;j<n;j++)
      { 
       if(i!=j)   
        {
            if(a[i]==a[j])
             {
                 c++;
             }
        }
      }
      if(c==0)
      printf("%d ",a[i]);
  }
  if(i==n && c!=0)
  printf("No unique elements are present in the array .");
  
 
}
