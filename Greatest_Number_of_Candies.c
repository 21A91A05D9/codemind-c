#include<stdio.h>
int main()
{
    int n,a[100],k,i,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+k>=max)
        printf("True ");
        else
        printf("False ");
    }
}