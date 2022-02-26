#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int sum=0,i;
    for (i=0; str[i]!=NULL; i++)
    {
        if (str[i]>=49 && str[i]<=57)
        {
            sum+=str[i]-48;
        }
    }
    printf("%d",sum);
    return 0;
}


