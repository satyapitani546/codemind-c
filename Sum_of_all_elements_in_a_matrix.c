#include<stdio.h>
int main()
{
    int n,i,arr[100][100],s=0,j,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            s=s+arr[i][j];
        }
    }
    printf("%d",s);
}