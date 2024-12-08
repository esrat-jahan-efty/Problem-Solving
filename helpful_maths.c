#include<stdio.h>
int main()
{
    char str[102];
    scanf("%s",str);
    getchar();
    int i=0,len=0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    int j,temp;

    for(i=0;i<=len;i=i+2)
    {
        for(j=i+2;j<=len;j=j+2)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
            else{
                continue;
            }
        }
    }
    printf("%s",str);
    return 0;
}