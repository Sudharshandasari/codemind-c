#include<stdio.h>
int main()
{
    int n1,n2,i,s,c=0;
    scanf("%d%d",&n1,&n2);
    for(n1;n1<=n2;n1++)
    {
        s=0;
        for(i=2;i*i<=n1;i++)
        {
            if(n1%i==0)
            {
                s=1;
                break;
            }
        }
        if(s==0&&n1!=1)
        {
            c++;
        }
    }
    printf("%d",c);
}
