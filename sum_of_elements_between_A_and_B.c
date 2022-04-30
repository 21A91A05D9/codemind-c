#include<stdio.h>
int main()
{
    int n,a[100],g,h,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&g,&h);
    for(i=0;i<n;i++)
    {
        if(a[i]>=g && a[i]<=h)
        sum=sum+a[i];
    }
    printf("%d",sum);
}