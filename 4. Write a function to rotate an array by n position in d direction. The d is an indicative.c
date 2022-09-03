/******************************************************************************

4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

*******************************************************************************/

#include <stdio.h>
void rotatearray(int a[],int , int , char );
int main()
{
    int n,p;
    char d;
    printf("Enter the direction :");
    scanf("%c",&d);
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the position :");
    scanf("%d",&p);
    rotatearray(a,n,p,d);
    
    

    return 0;
}
void rotatearray(int a[],int n, int p, char d)
{ int i,j,tem,tem1;
printf("Enter the elements :");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
    if(d=='L' || d=='l')
    {
        for(j=0;j<p;j++)
      {
        tem=a[0];
        for(i=0;i<n;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=tem;
      }
      printf("After rotatin array by %d position in left direction : ",p);
     for(i=0;i<n;i++)
     {
         printf("%d ",a[i]);
     }
    }
    else if(d=='R' || d=='r')
    {
      for(j=0;j<p;j++)
      {
          tem=a[n-1];
          for(i=n-1;i>=1;i--)
          {
              a[i]=a[i-1];
          }
          a[0]=tem;
      }
    
     printf("After rotatin array by %d position in right direction : ",p);
     for(i=0;i<n;i++)
     {
         printf("%d ",a[i]);
     }
    }
}
