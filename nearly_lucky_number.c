#include<stdio.h>
int main()
{
    long long int num,rem,count=0;
    scanf("%lld",&num);

    while(num!=0)
    {
        rem=num%10;
        
        if((rem==4) || (rem==7))
        {
            count++;

        }//4744000695826

        num=num/10;
    }
    

    if(count==4 || count==7)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;

}