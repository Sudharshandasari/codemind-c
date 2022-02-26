#include<stdio.h>
int main()
{
    char st[1000];
    scanf("%[^
]s",st);
    int i,s=0,c=0;
    for(i=0;st[i]!=NULL;i++)
    {
        c++;
    }
    for(i=0;i<c;i++)
    {
        if(st[i]>=48&&st[i]<=57)
        {
            s=s+(st[i]-48);
        }
    }
    printf("%d",s);
}
