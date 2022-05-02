#include<stdio.h>
int main()
{
    int a,b,ar[100],br[100],c,d=0,i,n;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
    scanf("%d",&br[i]);
    }
    scanf("%d",&c);
    for(i=0;i<a;i++)
    {
        if(ar[i]<=c && br[i]>=c)
        {
            d++;
        }
    }
    printf("%d",d);
}