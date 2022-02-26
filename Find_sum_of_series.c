#include<stdio.h>
int main()
{
    float d,a,i,sum=0;
    scanf("%f",&a);
    for(i=1;i<=a;i++)
    {
        d=1/i;
        sum=sum+d;
    }
    printf("%.2f",sum);
    return 0;
}
