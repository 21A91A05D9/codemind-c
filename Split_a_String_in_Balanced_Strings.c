#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000];
    int i,j=0,k=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='R')
            j++;
        if(str[i]=='L')
            j--;
        if(j==0)
        {
            k++;
        }
    }
    printf("%d",k);
}