#include<stdio.h>
char s[100],s1[100];
char st[100];
char st1[100];
int len=0,k=0,l=0;
void pop()
{
    st[k-1]=NULL;
    k--;
}
void pop1()
{
    st1[l-1]=NULL;
    l--;
}
int main()
{
    int i,v=0,j;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(s[i]==35)
        {
            pop();
        }
        else
        {
            st[k]=s[i];
            k++;
        }
    }
    len=0;
    scanf(" %[^
]s",s1);
    for(i=0;s1[i]!=NULL;i++)
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(s1[i]==35)
        {
            pop1();
        }
        else
        {
            st1[l]=s1[i];
            l++;
        }
    }
    j=0;
    for(i=0;i<k;i++,j++)
    {
        if(st[i]!=st1[j])
        {
            printf("False");
            v++;
            break;
        }
    }
    if(v==0)
    {
        printf("True");
    }
}