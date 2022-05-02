#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,ar[100],j,max=0,min=1000,c=0,k=0;
        scanf("%d",&a);
        for(j=0;j<a;j++)
        {
            scanf("%d",&ar[j]);
        }
        for(j=1;j<a;j++)
        {
            if(ar[j-1]>ar[j])
            c++;
        }
        if(c==0)
        printf("%d",c);
        else
        {
            for(k=0;k<a;k++)
            {
               if(ar[k]>max)
               max=ar[k];
            }
            for(k=0;k<a;k++)
            {
                if(ar[k]<min)
                min=ar[k];
            }
    printf("%d",max-min);
        }
    printf("
");
    }
}