#include<stdio.h>
int main()
{
    int i,j,n,a[i],p,q,c=0,c1,d=0,d1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    if(n%2!=0)
    {
   p=(n/2)+1;
   q=n/2;
    }
    else
    {
        p=n/2;
        q=n/2;
    }
   for(i=0;i<p;i++)
   {
       c=c+a[i];
   }
   c1=c/p;
    for(i=p;i<n;i++)
   {
       d=d+a[i];
   }
   d1=d/q;
   if(c1==d1)
   {
       printf("[");
     for(i=0;i<n;i++)
     {
         
     if(i<p)
    {
        printf("%d ",a[i]);
    }
     }
   printf("]");
     printf(",[");
     for(i=p;i<n;i++)
     {
         
     if(p<n)
    {
        printf("%d ",a[i]);
    }
     }
   printf("]");
   }
   else 
   {
       printf("no solution");
   }
    return 0;
}
