#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int jar;
        scanf("%d",&jar);

        int berries=jar*2;

        printf("%d\n",berries);
    }

    return 0;
}