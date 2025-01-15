#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    int first,sec;
        scanf("%d",&first);
        getchar();

    int i;
    int count=1;
    
    for(i=1;i<n;i++)
    {
        scanf("%d",&sec);
        if(sec!=first)
        {
            count++;
        }
        first=sec;

    }
    printf("%d",count);
    return 0;
}