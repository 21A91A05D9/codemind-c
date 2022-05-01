#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int a,c=0,i=0,v=0,j;
    scanf("%[^
]s",s);
    a=strlen(s);
    for(i=a-1;i>=0;i--)
    {
        c+=1;
        if(s[i]==32 || i==0)
        {
             v=0;
             if(i==0)
             printf("%c",s[0]);
            for(j=i+1;(c-1)!=v;j++)
            {
                v++;
            printf("%c",s[j]);
            }
            c=0,v=0;
        printf(" ");
        }
    }
}