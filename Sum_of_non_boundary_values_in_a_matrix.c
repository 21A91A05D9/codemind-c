#include<stdio.h>
int main()
{
    int n=0,m,ar[100][100],a,b,i,j;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i!=0 && j!=0 && i!=a-1 && j!=b-1)
            n=n+ar[i][j];
        }
    }
    printf("%d",n);
}