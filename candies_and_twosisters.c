#include<stdio.h>
int main()
{

        int t, n, a, b, x, Count;
    scanf("%d", &t);
 
    while (t--) 
    {
        scanf("%d",&n);
        
        if (n%2!=0)
        {
            x=n/2;
            Count=0; 
            for (int i=1;i<=x;i++) 
            {
                b = n/i;
                a = n-b;
                if(a+b==n) 
                { 
                    Count++;
                }
            }
            printf("%d\n", Count);
        }
        else
        {
            x=(n/2)-1;
            Count = 0; 
            for (int i=1;i<=x;i++) 
            {
                b = n / i;
                a = n-b;
                if (a+b==n) 
                { 
                    Count++;
                }
            }
            printf("%d\n", Count);
        }
    }
 
     /*int t;
    scanf("%d",&t);

    while(t--)
    {


       int n;
        scanf("%d",&n);

        int m=(
        
            a=n-b;

            if(a>b && a+b==n)
            {
                count++;
            }
        }

    }*/

    return 0;
}