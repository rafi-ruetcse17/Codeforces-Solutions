#include<stdio.h>
int main()
{
    long long a[2050],count=0;
    int i,j,d,k,n,x,y;
    scanf("%d%d",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {

        if(a[i]-a[i+1]>=0)
        {
            x=a[i]-a[i+1];
            y=x/d;
                a[i+1]+=((y+1)*d);


            count+=y+1;
        }

    }

        printf("%lld ",count);

}
