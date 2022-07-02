#include<stdio.h>
int main()
{
    int n,i,a[100],c=0,x=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(a[i]==c)
        {
            x++;
            a[i]=-1;
        }
    }
    printf("%d",x);
}