#include<stdio.h>
int main() 
{
    int i,j,sum=0,n,temp,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             if(a[j]<a[j-1])
                {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                }
          }
     }
     
     for(i=0;i<n;i++)
     {
         for(j=1;j<n;j++)
         {
             if(a[i]==a[j])
             {
                 flag=1;
             }
         }
     }
     
     if(flag==0)
     {
        printf("sum=%d",a[i-1]);
     }
     else
      for(i=0;i<n;i++) 
         if(i==n-1 || i==n)
         sum=a[i-1]+a[i];
        printf("%d",sum);
     
     
}
     
