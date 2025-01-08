#include<stdio.h>
int main()
{
    long long int num,rem,count=0,count_2=0;
    scanf("%lld",&num);

    long long int num_2=num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        count++;
    }

    while(num_2!=0)
    {
        rem=num_2%10;
        num_2=num_2/10;
        if((rem==4) || (rem==7))
        {
            count_2++;
        }
        
    }

    if(count==count_2)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;

}