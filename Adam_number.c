#include<stdio.h>
int main()
{
    int n,r,p,q,rev=0,org=0;
    scanf("%d",&n);
    p=n*n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    q=rev*rev;
    while(q>0)
    {
        r=q%10;
        org=org*10+r;
        q=q/10;
    }
    if(p==org)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}