#include<stdio.h>
int main()
{
    int rooms;
    scanf("%d",&rooms);

    int i,count=0;

    for(i=0;i<rooms;i++)
    {
        int p,q;
        scanf("%d%d",&p,&q);

        int remain=q-p;

        if(remain>=2)
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}