#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    int total=0,passenger_num[n];

    for(i=0;i<n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);

        int remain=b-a;

        total=total+remain;
        passenger_num[i]=total;

    }
    
    int capacity=passenger_num[0];

    for(i=1;i<n;i++)
    {
        if(passenger_num[i]>capacity)
        {
            capacity=passenger_num[i];
        }
    }

    printf("%d\n",capacity);

    return 0;
}