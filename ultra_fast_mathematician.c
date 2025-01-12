#include<stdio.h>
int main()
{
    char a[101],b[101],c[101];
    scanf("%s",a);
    
    scanf("%s",b);
    

    int i=0,k=0;

    while((a[i]!='\0')&&(b[i]!='\0'))
    {
        if(a[i]==b[i])
        {
            c[k]='0';
        }
        else 
        {
            c[k]='1';
        }
        i++;
        k++;

    }
    c[k]='\0';

    printf("%s",c);

    return 0;
}