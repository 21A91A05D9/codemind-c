#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,v,j,p=0;
    scanf("%d",&a);
    scanf("%d",&b);
    int c=0;
    for(i=a;i<=b;++i)
    {
        if(i==1)
        continue;
        v=0;
        for(j=2;j<=sqrt(i);++j)
        {
            if(i%j==0)
            {
                v=1;
                break;
            }
        }
        if(v==0)
        ++p;
    }
    printf("%d",p);
}