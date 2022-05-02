#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     int a,ar[100],h=0,s=0,j;   
        s=0;
        scanf("%d",&a);
        for(j=0;j<a-1;j++)
        {
            scanf("%d",&ar[j]);
        }
        h=a*(a+1)/2;
        for(j=0;j<a-1;j++)
        {
           s=s+ar[j]; 
        }
        printf("%d
",abs(h-s));
    }
}