#include<stdio.h>
int main()
{
    int k,w,i;
    long long int n,sum=0,borrow;
    scanf("%d",&k);
    scanf("%lld",&n);
    scanf("%d",&w);
    for(i=w;i>0;i--)
    {
        sum=sum+(i*k);
    }
    if(sum>n)
    {
        borrow=sum-n;
    }
    else{
        borrow=0;
    }
    printf("%lld",borrow);
    return 0;

}