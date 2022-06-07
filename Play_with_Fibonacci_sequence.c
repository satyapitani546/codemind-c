#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c,i;
    a=0;
    b=1;
    printf("%d %d ",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    
}