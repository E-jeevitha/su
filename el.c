#include<stdio.h>
int main()
{
    int a[10],i,j,p,q,t,count=0,s;
    scanf("%d%d",&p,&q);
    for(i=0;i<p;i++)
    {
        scanf("%d",&a[i]);
       
    }
    for(i=0;i<p;i++)
    {
        if(t<q)
        {
            t=a[i]+a[i+1];
            a[i+1]=t;
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d",count);
    return 0;
}
