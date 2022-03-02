#include<stdio.h>
int main()
{
    int CO=0,n,a=0,b=1,c=0;
    scanf("%d",&n);
    while(c<=n)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        {
        printf("True");
        CO++;
        }
    }
    if(CO==0)
    printf("False");
    return 0;
}