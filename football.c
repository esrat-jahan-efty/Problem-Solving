#include<stdio.h>
int main()
{
    char str[101];
    scanf("%s",str);
    getchar();

    int i=0,count=1;
    while(str[i]!='\0')
    {
        
        if(str[i]==str[i+1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        if(count==7)
        {
            break;
        }
        i++;
    }
    if(count==7)
    {
        printf("YES\n");

    }
    else{
        printf("NO\n");
    }

    return 0;
}