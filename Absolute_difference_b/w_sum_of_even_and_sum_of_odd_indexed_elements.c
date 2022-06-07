#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0,m=0,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            m=m+arr[i];
        }
    }
    c=sum-m;
    printf("%d",c);
}