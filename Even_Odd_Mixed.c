#include<stdio.h>
int main()
{
    int n,c=0,l=0,m=0,k=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        c+=1;
        n=n/10;
        if(r%2==0)
        {
            l+=1;
        }
        else if(r%2!=0)
        {
            m+=1;
        }
        else
        {
            k+=1;
        }
    }
    if(c==l)
    {
        printf("Even");
    }
    else if(c==m)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}