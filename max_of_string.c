#include<stdio.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int i,c=0,max;
    for(i=0;a[i]!=NULL;i++)
    {
        c++;
    } 
    max=0;
    for(i=0;i<c;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%c",max);
}
