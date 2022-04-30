#include<stdio.h>
int main()
{
    int n,m,a[100],b[100],c=0,i,j,d[100],l,k=0,h;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {  h=0;
        for(l=0;l<k;l++)
        {
            if(d[l]==a[i])
            h++;
        }
        if(h==0)
        {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
            c+=1;
            break;
            }
        }
        d[k]=a[i];
        k++;
        }
    }
    printf("%d",c);
}