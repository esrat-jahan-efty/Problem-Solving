#include<stdio.h>
int main()
{
    long long int n,en,on,ten,ton,se,so,ans;
    scanf("%lld",&n);
    if(n%2==0)
    {
       en=n;
       on=n-1;
    }
    else{
       en=n-1;
       on=n;
    }

    ten=((en-2)/2)+1;
    ton=((on-1)/2)+1;

    se=(ten*(en+2))/2;
    so=(ton*(on+1))/2;
    
    ans=se-so;

    printf("%lld",ans);


    return 0;


}