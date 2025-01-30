#include<stdio.h>
int main()
{
    int s=4;

    long long int arr[s];

    for(int i=0;i<s;i++)
    {
        scanf("%lld",&arr[i]);
    }

    int count =0;

    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    
    printf("%d",count);

    return 0;
}