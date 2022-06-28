#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float avg,sum=0;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
}