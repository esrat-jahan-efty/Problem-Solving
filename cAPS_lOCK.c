#include<stdio.h>
#include<string.h>
int main()
{
    char str[102],cpystr[102];
    scanf("%s",str);
    getchar();

    int len=strlen(str),flag=0;
    
    if(str[0] >= 'a' && str[0] <= 'z')
    {
        for(int i = 1; i < len ; i++)
        {
            if(str[i] >='A' && str[i]<='Z')
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }

        if(flag == 1)
        {
            str[0] = str[0] - 32;

            for(int i = 1; i < len ; i++)
            {
                str[i] = str[i] + 32;
            }

            printf("%s\n",str);
        }
        else
        {
            printf("%s\n",str);
        }
    }else
    {
        for(int i = 0; i < len ; i++)
        {
            if(str[i] >='A' && str[i]<='Z')
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }

        if(flag == 1)
        {
            for(int i = 1; i < len ; i++)
            {
                str[i] = str[i] + 32;
            }

            printf("%s\n",str);
        }
        else
        {
            printf("%s\n",str);
        }

    }

    return 0;

}