#include<stdio.h>
int main()
{
    char str[101];

    scanf("%s",str);
    getchar();

    int k=0,count_upper=0,count_lower=0;

    while(str[k]!='\0')
    {
        if(str[k]>=65 && str[k]<=90)
        {
            count_upper++;
        }
        if(str[k]>=97 && str[k]<=122)
        {
            count_lower++;
        }
        k++;
    }
    int i;
    if(count_lower<count_upper)
    {
        i=0;
        while(str[i]!='\0')
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        i++;
    }
    }
    else
    {
        i=0;
        while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        i++;
    }
    }

    printf("%s",str);
    return 0;
}