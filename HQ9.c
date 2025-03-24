#include<stdio.h>
int main()
{
    char str[101];
    scanf("%s",str);
    getchar();

    int count=0,i=0;

    while(str[i]!='\0')
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9' )
        {
            count++;
            break;
        }
        else{
            count=0;
        }

        i++;
    }

    if(count==0)
    {
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }


    return 0;
}