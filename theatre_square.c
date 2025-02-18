#include<stdio.h>
int main()
{
    long long int n,m,a,rslt1,rslt2,ans;
    scanf("%lld%lld%lld",&n,&m,&a);

    if((n%a)== 0)
    {
        rslt1=(n/a);
    }
    else{
        rslt1=(n/a)+1;
    }
    if((m%a)==0)
    {
        rslt2=m/a;
    }
    else
    {
        rslt2=(m/a)+1;
    }

    ans=rslt1*rslt2;

    printf("%lld\n",ans);
    return 0;

}