#include<stdio.h>
int main()
{
    int n,a[100],g,h,sum=0,i,min=10000,v=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&g,&h);
    for(i=0;i<n;i++)
    {
        if(a[i]>=g && a[i]<=h){
            if(a[i]<min)
            {
            min=a[i];
            v++;
            }
        }
        
    }
    if(v!=0)
    printf("%d",min);
    if(v==0)
    printf("-1");
}