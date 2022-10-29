#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        int s[a],i,max=0,min=100;
        for(i=0;i<a;i++)
        {
            scanf("%d",&s[i]);
        }
        for(i=0;i<a;i++)
        {
            if(s[i]>max)
            {
                max=s[i];
            }
        }
        for(i=0;i<a;i++)
        {
            if(s[i]<min)
            {
                min=s[i];
            }
        }
        if(max==s[a-1])
        {
            printf("0");
        }
        else
        {
            printf("%d
",max-min);
        }
    }
}