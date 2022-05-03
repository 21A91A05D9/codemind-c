#include<stdio.h>
int main()
{
    int a=1,b=1,c=2,n,r,i;
    scanf("%d",&n);
    if(i==0)
    printf("1");
    else if(i<=2)
    printf("%d",n);
    else
    {
        for(i=3;i<=n;i++)
        {
            r=a+b+c;
            a=b;
            b=c;
            c=r;
        }
        printf("%d",r);
    }
}