#include<stdio.h>
int main()
{
    int n,t,r,a[100],i,j;
    scanf("%d",&n);
    t=n;
    while(t)
    {
        r=t%10;
        if(r%2!=0)
        {
        a[i]=r;
        i++;
        }
        t=t/10;
    }
    for(j=i-1;j>=0;j--)
    printf("%d",a[j]*a[j]);
}