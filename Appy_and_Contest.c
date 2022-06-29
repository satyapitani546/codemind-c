#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,x,y,k,c1=0,c2=0,c3=0,i;
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&n,&x,&y,&k);
        c1=((n-x)/x)+1;
        c2=((n-y)/y)+1;
        c3=((n-(x*y))/(x*y))+1;
        if(c1+c2-c3>k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}