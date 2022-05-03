#include<stdio.h>
int main()
{
    int num,T,i=1,d,s=0;
    scanf("%d",&num);
    T=num;
    while(i<=num/2)
    {
        s=i*i;
        if(s==T)
        {
            d=1;
        }
        i++;
    }
    if(d==1)
    {
        printf("True");
    }
    else
    printf("False");
}