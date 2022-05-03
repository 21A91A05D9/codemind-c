#include<stdio.h>
int main()
{
   long int a,i,n,m,v=0,j;
    scanf("%ld",&a);
    for(j=0;j<a;j++)
    {
        v=-1;
        scanf("%ld%ld",&n,&m);
      //printf("%d %d
",n,m);
        for(i=0;i<m;i++)
        {
         if((i*i) % m==n )
         {
             v=i;
             break;
         }
        }
    printf("%ld
",v);
    }
}
