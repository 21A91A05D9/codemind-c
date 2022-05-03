#include<stdio.h>
#include<math.h>
int main()
{
    int n,left,right;
    scanf("%d",&n);
    left=pow(2,floor(log2(n)));
    right=left*2;
    if(n-left<right-n)
    printf("%d",n-left);
    else
    printf("%d",right-n);
}