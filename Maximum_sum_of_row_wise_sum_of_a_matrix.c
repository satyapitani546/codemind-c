#include<stdio.h>
int main()
{
    int n,i,a[100][100],j,m,s=0,max=0;
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
        s=0;
        for(j=0;j<m;j++)
        {
           s=s+a[i][j]; 
        }
        if(s>max)
        {
            max=s;
        }
    }
    printf("%d",max);
}