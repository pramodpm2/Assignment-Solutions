#include<stdio.h>
void main()
{
    int l=1;
    scanf("%d",&l);
   if(l>=1&&l<=10)
       while(l>0)
       {
          int k,n,i=0,j,a[1000],small=0;
            scanf("%d",&n);
            scanf("%d",&k);
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            small=a[0];
            for(i=0;i<n;i++)
            {
                if(a[i]<small)
                {
                    small=a[i];
                }
            }
            
            if(small<k)
            {
                printf("%d\n",k-small);
            }
            else
            {
               
                printf("0\n");
            }
            l--;
       }  
}      
