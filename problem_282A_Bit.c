#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i,x=0;

    for(i=1;i<=n;i++)
    {
        char str[4];
        scanf("%s",str);
        getchar();

        if(str[1]=='+')
        {
            x=x+1;
        }
        else if(str[1]=='-')
        {
            x=x-1;
        }
    }
    
    printf("%d\n",x);

    return 0;
}