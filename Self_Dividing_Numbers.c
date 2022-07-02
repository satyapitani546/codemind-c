#include<stdio.h>
int main()
{
    int m,n,t,c,s,d,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        t=i;
        s=0;
        c=0;
        while(t!=0)
        {
            d=t%10;
            t=t/10;
            c+=1;
            if(d==0)
            {
                break;
            }
            if(i%d==0)
            {
                s+=1;
            }
        }
        if(s==c)
        {
            printf("%d ",i);
        }
    }
    
}