#include<stdio.h>
int main()
{
    int r,c,i,a[100][100],j,s=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j ||i+j==c-1)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("%d",s);
}