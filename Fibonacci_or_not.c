#include<stdio.h>
int main()
{
    int data,n1=0,n2=1,temp,flag=0;
    scanf("%d",&data);
    while(n2<=data)
    {
        temp=n2;
        n2=n1+n2;
        n1=temp;
        if(n2==data)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}