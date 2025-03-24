//TIME LIMIT ERROR ON TEST 3
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        long long int a,b,c,count=0;
        scanf("%lld%lld",&a,&b);

        if(a%b==0)
        {
            count=0;
        }
        else
        {
            while(a%b!=0)
            {
                a++;
                count++;
                if(a%b==0)
                {
                    break;
                }
                else{
                    continue;
                }
            }
        }

        printf("%lld\n",count);
    }

    return 0;
}