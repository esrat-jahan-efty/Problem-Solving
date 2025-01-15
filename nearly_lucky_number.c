#include<stdio.h>
int main()
{
    long long int num,rem,flag=0;
    scanf("%lld",&num);

    if(num==7)
    {
        flag=1;
    }
    else if(num==4)
    {
        flag=1;
    }
    else
    {
    while(num!=0)
    {
        rem=num%10;
        
        if((rem!=4) && (rem!=7))
        {
            flag=1;
            break;
        }
        num=num/10;
    }
    }

    if(flag==0)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;

}