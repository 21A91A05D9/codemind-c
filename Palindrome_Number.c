#include<stdio.h>
int main()
{
    int a,b,i,r,sum=0,c;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {   b=0,c=0,sum=0;
        scanf("%d",&b);
        c=b;
        while(b>0)
        {
            r=b%10;
            sum=(sum*10)+r;
            b=b/10;
        }
        if(sum==c)
        printf("True
");
        else
        printf("False
");
    }
}