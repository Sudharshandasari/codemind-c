#include<stdio.h>
int main()
{
    char st[100];
    scanf("%[^
]s",st);
    int i,s1=0,s2=0;
    for(i=0;st[i]!=NULL;i++)
    {
        if(st[i]==122)
        {
            s1++;
        }
        else if(st[i]==111)
        {
            s2++;
        }
    }
    if(s1*2==s2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}



