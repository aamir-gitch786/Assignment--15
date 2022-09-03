/******************************************************************************

10. Write a function in C to count the frequency of each element of an array.

*******************************************************************************/

#include <stdio.h>
void frequency(int [],int );
int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    frequency(a,n);

    return 0;
}
void frequency(int a[],int n)
{
    int i,j,count=0,tem,b[n];
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        count=1;
    if(a[i]!=-1)
     {
        for(j=i+1;j<n;j++)
        {
          if(a[i]==a[j])
          {count++;
          a[j]=-1;
          }
        }
        
        b[i]=count;
     }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
           printf("%d frequency is %d\n",a[i],b[i]); 
        }
    }
}