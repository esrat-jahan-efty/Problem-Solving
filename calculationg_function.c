#include<stdio.h>
int main()
{
    long long int n,p=0,q=0,i;
    scanf("%lld",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            p=p+i;
        }
        else{
            q=q+i;
        }
    }
    printf("%lld",p-q);

    return 0;


}