#include<stdio.h>
#include<string.h>
int main()
{
    char str[101],const_str[101];
    scanf("%s",str);
    getchar();
    int i=0,j=0,k=0,f=0;
    while(str[k]!='\0')
    {
        if(str[k]>=65 && str[k]<=90)
        {
            str[k]=str[k]+32;
        }
        k++;
    }
    while(str[i]!='\0')
    {
        if((str[i]!='a') && (str[i]!='i') && (str[i]!='o') && (str[i]!='y') && (str[i]!='e') && (str[i]!='u'))
        {
            const_str[j]=str[i];
            j++;
        }
        i++;
    }
    const_str[j]='\0';
    int length=strlen(const_str);
    int l=length*2;
    char final_str[l];int m=0;
    for(f=0;f<l;f++)
    {
        if(f%2==0)
        {
            final_str[f]='.';
        }
        else if(f%2!=0)
        {
            final_str[f]=const_str[m];
            m++;
        }
    }
    final_str[f]='\0';
    printf("%s",final_str);
    return 0;

}