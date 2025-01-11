#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);

    char s[n],temp;
    scanf("%s",s);
    getchar();

    int i,j=0;
    while(j<t)
    {
        i=0;
        while(s[i]!='\0')
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
               i++;
            }
            i++;
             
        }
        j++;
    }

    printf("%s\n",s);

    return 0;
}