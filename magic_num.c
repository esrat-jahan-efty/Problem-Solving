#include<stdio.h>
int main()
{
    long long int num,rem;
    scanf("%lld",&num);

    if(num<0)
    {
        num=num*(-1);
    }

    int flag=0;

    while(num!=0)
    {
        rem=num%10;
        if(rem!=3 && rem!=9)
        {
            flag=1;
            break;
        }

        num=num/10;
    }

    if(flag==1)
    {
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
    return 0;

}