#include<stdio.h>
int main()
{
    int n,a[n],f=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0 & i%2==0)
        {
            f=1;
        }
    }
    if(f==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}