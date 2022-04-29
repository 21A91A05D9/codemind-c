#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,a[100],x=0,y=0,res=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i+=4)
      x=x+a[i];
    for(i=2;i<n;i+=4)
      y=y+a[i];
      for(i=1;i<n;i+=4)
      x=x+a[i];
      for(i=3;i<n;i+=4)
      y=y+a[i];
res=abs(x-y);
if(res%4==0)
printf("X");
else
printf("Y");
}