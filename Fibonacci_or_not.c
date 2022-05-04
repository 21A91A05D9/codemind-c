#include<stdio.h>
int main()
{
    int n,a=1,b=2,c,v=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=a+b;
        if(c==n)
        {
        printf("True");
        v++;
        break;
        }
        if(c>n)
        {
            break;
        }
        a=b;
        b=c;
    }
    if(v==0)
    printf("False");
}