#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],d[100],t;
    int i,j;
    scanf("%[^
]s",s);
    scanf(" %[^
]s",d);
    strcat(s,d);
    for(i=0;s[i]!=NULL;i++)
    {
        for(j=i+1;s[j]!=0;j++)
        {
            if(s[i]>s[j])
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    for(i=0;s[i]!=NULL;i++)
    {
        printf("%c",s[i]);
    }
}