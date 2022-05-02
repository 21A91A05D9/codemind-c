#include<stdio.h>
int main()
{
    int n,i,a[1000],c,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=2;i<=1000;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%i==0)
            c++;
        }
        if(c==n)
        {
         if(i>sum)
            sum=i;
        }
    }
        if(sum>0)
        printf("%d",sum);
        else
        printf("1");
}