#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int result=n/2;
    long long int height[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&height[i]);
    }
    int queries;
    scanf("%d",&queries);
    while(queries--)
    {
        long long int shoot_height,bullet_power,pillar_strength,count=0;
        scanf("%lld",&shoot_height);
        scanf("%lld",&bullet_power);
        scanf("%lld",&pillar_strength);

        for(int i=0;i<n;i++)
        {
            if(height[i]>=shoot_height)
            {
                count++;
            }
            if(count>result)
            {
                break;
            }
            
        }

        long long int lost_power=count*pillar_strength;
        long long int remaining_power=bullet_power-lost_power;

        if(remaining_power>0)
        {
            printf("Apaa Nai :(\n");
        }
        else{
            printf("Apaa Ache :)\n");
        }
    }
    return 0;
}///time limit error
