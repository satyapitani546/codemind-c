#include<stdio.h>
int main()
{
    int n,i,a[100][100],j,m,s1=0,s2=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]%2==0)
            {
                s1=s1+a[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]%2==1)
            {
                s2=s2+a[i][j];
            }
        }
    }
    printf("%d %d",s1,s2);
}