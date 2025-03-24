//UNSOLVED
//WA on 1st submission 
//ekhane run korle output same ashe but cf e sumit dile output 0.0000000 dekhay
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i=0,prnctg;
    double sum=0.0;

    while(i<n)
    {
        scanf("%d",&prnctg);
        sum=sum+prnctg;

        i++;
    }

    double ans=sum/n;

    printf("%.12lf\n",ans);

    return 0;
}