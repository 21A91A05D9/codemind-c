#include<stdio.h>
int main()
{
    int a,b,c,i,j,d,t;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    for(i=c+1;;i++)
    {
        t=i;
        d=0;
        for(j=1;j<=t;j++)
        {
            if(t%j==0)
            d+=1;
        }
        if(d==2)
        {
            printf("%d",i-c);
            break;
        }
    }
}