#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

     char first[3],sec[3];
        scanf("%s",first);
        getchar();

    int i;
    int count=1;
    
    for(i=1;i<n;i++)
    {
        scanf("%s",sec);
        getchar();

        int j=0;
        if(sec[j]!=first[j])
        {
            count++;
        }
        strcpy(first,sec);

    }
    printf("%d",count);
    return 0;
}