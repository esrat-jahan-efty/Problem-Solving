#include<stdio.h>
int main()
{
    long long int n,rem;
    scanf("%lld",&n);

    int i,k;
    scanf("%d",&k);

    for(i=1;i<=k;i++)
    {
        rem=n%10;

        if(rem==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
    }

    printf("%lld",n);
    
    return 0;

}