#include<stdio.h>
int main() 
{
    int i,j,sum=0,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             if(a[j]<a[j-1]
                {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                }
          }
      }
    for(i=1;i<n;i++)
    { 
        for(j=i;j>=1;j--)
        {
            if(a[j-1]<a[i] && a[j-1]!=0)
            {
                a[j-1]=0;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
        sum+=a[i];
    printf("%d",sum);
}
