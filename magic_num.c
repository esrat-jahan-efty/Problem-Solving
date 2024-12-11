#include<stdio.h>
int main()
{
    long long int num,rem,count=0,count_2=0;
    scanf("%lld",&num);

    if(num<0)
    {
        num=num*(-1);//number -ve hole +ve korbo 
    }

    long long int num_2=num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        count++;//number er total digit count korbo 
    }

    while(num_2!=0)
    {
        rem=num_2%10;
        num_2=num_2/10;
        if((rem==3) || (rem==9))
        {
            count_2++;
        }
        
    }

    if(count==count_2)//true hole magic number 
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");//false hole magic number na as it only consists of either 3 or 9 or both
    }
    return 0;

}//wrong on test 19