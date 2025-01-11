#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    int i,flag=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("HARD\n");
    }
    else 
    {
        printf("EASY\n");
    }

    return 0;

}