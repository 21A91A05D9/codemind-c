#include<stdio.h>
int main()
{
    int n,i,j,count=0,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    printf("0");
    else
    {
    for(i=n;i>=1;i--)
    {  count=0;
        for(j=1;j<=i;j++)
        {
           if(i%j==0)
           {
               count++;
           }
        }
        if(count==2)
        {
        a=i;
        break;
        }
    }
    for(i=n; ;i++)
    {  count=0;
        for(j=1;j<=i;j++)
        {
           if(i%j==0)
           {
               count++;
           }
        }
        if(count==2)
        {
        b=i;
        break;
        }
    }
    a=n-a;
    b=b-n;
    c=(a>b)?b:a;
    printf("%d",c);
    }
}