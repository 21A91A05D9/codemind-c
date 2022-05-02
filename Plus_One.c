#include<stdio.h>
int main()
{
    int n,i,a[1000],p=0,t,r,b[1000],j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        p=p*10+a[i];
    }
    p=p+1;
    t=p;
    i=0;
    while(t)
    {
        r=t%10;
        b[i]=r;
        i++;
        t=t/10;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d ",b[j]);
    }
}