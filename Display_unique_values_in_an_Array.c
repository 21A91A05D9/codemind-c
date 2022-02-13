#include<stdio.h>
int main()
{
    int n,i,j,k=0,count=0,l,v;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {  count=0,v=0;
       for(l=0;l<k;l++)
       {
           if(b[l]==a[i])
           v--;
       }
       if(v>=0)
       {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            count++;
        }
        if(count==1)
        {
            b[k]=a[i];
            k++;
        }
       }
    }
    if(k==0)
    {
        printf("-1");
    }
    else
    {
    for(i=0;i<k;i++)
    {
        printf("%d ",b[i]);
    }
    }
}