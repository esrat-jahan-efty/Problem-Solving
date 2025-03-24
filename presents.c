#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[101],null_array[101];
    
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++)
    {
        null_array[i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        null_array[arr[i]]=i;
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",null_array[i]);
    }


}