#include<stdio.h>
int main()
{
    int long i,n,a,count=0,p,m;
    scanf("%ld",&n);
    p=n;
    m=p;
    while(p!=0)
    {
        p=p/10;
        ++count;
    }
    while(0<count)
    {
       a= m%10;
       m=m/10;
       printf("%d",a);
       count--;
    }
}
