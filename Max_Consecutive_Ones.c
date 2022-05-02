#include<stdio.h>
int main()
{
    int n,i,a[100],c,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    c=0,max=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        c+=1;
        else
        {
            c=c+1;
            if(c>max)
            max=c;
            c=0;
        }
    }
    printf("%d",max);
}