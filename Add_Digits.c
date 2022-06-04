#include<stdio.h>
int sum(int n)
{
    int r,re=0;
    while(n>0)
    {
        r=n%10;
        re=re+r;
        n=n/10;
    }
    return re;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n>9)
    {
        n=sum(n);
    }
    printf("%d",n);
}