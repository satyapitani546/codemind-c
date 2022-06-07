#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,m,s;
    scanf("%d%d%d",&x,&y,&m);
    z=pow(x,y);
    s=z%m;
    printf("%d",s);
}