#include<stdio.h>
int main()
{
    long long int x,count=0;
    scanf("%lld",&x);

    long long int step_5=x/5;
    long long int remain=x%5;
    if(remain==4)
    {
      count=1;
    }
    else if(remain==3)
    {
      count=1;
    } 
    else if(remain==2)
    {
      count=1;
    } 
    else if(remain==1)
    {
      count=1;
    }
    printf("%lld\n",step_5+count);
    return 0;

}