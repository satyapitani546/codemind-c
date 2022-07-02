#include<stdio.h>
int main()
{
    int s,b,t,cap,c;
    scanf("%d%d%d",&s,&t,&b);
    cap=2*s*t*b*512;
    c=cap/1024;
    printf("%dKB",c);
}