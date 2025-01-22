#include<stdio.h>
#include<string.h>
int main()
{
    char str[102],cpystr[102];
    scanf("%s",str);
    getchar();

    strcpy(cpystr,str);

    int len=strlen(str),i=0,flag=0;

    while(i<len)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;

                
            for(i=i+1;i<len;i++)
            {
                if(str[i]>=97 && str[i]<=122)
                {
                    flag=1;
                    break;
                }

                else if(str[i]>=65 && str[i]<=90 && flag==0)
                {
                    str[i]=str[i]+32;
                }
            }
        }
        else{
            for(i=i+1;i<len && flag==0 ;i++)
            {
                if(str[i]>=65 && str[i]<=90)
                {
                    str[i]=str[i]+32;
                }
            }
            
        }
    }
    if(flag==1)
    {
        printf("%s",cpystr);
    }
    else{
    printf("%s",str);
    }

    return 0;

}