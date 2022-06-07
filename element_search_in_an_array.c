#include<stdio.h>
int linear_search(int *a,int n,int se)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==se)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,i,a[n],se;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&se);
    if(linear_search(a,n,se))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}