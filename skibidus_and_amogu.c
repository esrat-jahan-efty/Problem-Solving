#include<stdio.h>
#include<string.h>
int main()
{
    int t,len;

    scanf("%d", &t );

    while(t--)
    {
        char amog[12];
        scanf("%s",amog);
        getchar();

        len=strlen(amog);

        int e,f=0;

        for(e=len-1;i>=0;i--)
        {
            if(amog[e]=='s' && amog[e-1]=='u')
            {
                f=1;
               break;
            }
           
        }
        if(f==1)
        {
            amog[e-1]='i';
            amog[e]='\0';
        }

         printf("%s",amog);

    }
    return 0;



}