#include<iostream>
#include<algorithm>
using namespace std;
int main() 
{
    int i,j,sum=0,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
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
