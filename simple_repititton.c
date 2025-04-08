#include <stdio.h>
#include <math.h>

int main() 
{
    int t;
    scanf("%d",&t);

    while (t--) 
    {
        int x,k;
        scanf("%d%d",&x,&k);

        long long int y=0;
        int digits=0;
        int num=x;

        
        while (num>0) 
        {
            digits++;
            num=num/10;
        }

        
        for(int i=0;i<k;i++) 
        {
            y=(y*pow(10,digits))+x;
        }

        if (y<=1) 
        {
            printf("NO\n");
            continue;
        }

        
        int isPrime=1;
        for (long long int a=2;a*a<=y;a++) 
        {
            if (y%a==0) 
            {
                isPrime=0;
                break;
            }
        }

        if (isPrime)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}