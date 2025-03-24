#include<stdio.h>
int main()
{
    int n,i; scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==1 && i==n)
        {
            printf("I hate it ");
        }
        else if(i%2==0 && i==n)
        {
            printf("I love it ");
        }
        else if(i%2!=0)
        {
            printf("I hate that ");
        }
        else if(i%2==0)
        {
            printf("I love that ");
        }
    }

    return 0;
}