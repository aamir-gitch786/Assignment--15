/******************************************************************************

9. Write a function in C to merge two arrays of the same size sorted in descending
order.
*******************************************************************************/

#include <stdio.h>
void sorted(int [],int [],int );
int main()
{
    int n;
    printf("Enter the  same size of  arrays  :");
    scanf("%d",&n);
    int a[n],b[n];
    sorted(a,b,n);
    return 0;
}
void sorted(int a[],int b[],int n)
{
  int i,j,c[2*n],tem;
  printf("Enter the first array elements :");
    for(i=0;i<n;i++)
      {scanf("%d",&a[i]);
       c[i]=a[i];
      }
 
  printf("Enter the seconde array elements :");
    for(i=0;i<n;i++)
      {scanf("%d",&b[i]);
       c[n+i]=b[i];
      }
  for(i=0;i<2*n;i++)
  {
      for(j=i+1;j<2*n;j++)
      {
          if(c[i]<c[j])
          {
              tem=c[i];
              c[i]=c[j];
              c[j]=tem;
          }
      }
  }
  printf("Arrays elements in descending order : ");
  for(i=0;i<2*n;i++)
  printf("%d ",c[i]);
  
  
}
