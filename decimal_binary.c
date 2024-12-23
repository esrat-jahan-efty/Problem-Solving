#include<stdio.h>
#include<string.h>
int main()
{
    int num;
    scanf("%d",&num);
    int rem,i=0,j;
    char number[100],binary[100];
    while(num>0)
    {
        number[i]=(num%2)+'0';
        num=num/2;
        i++;
    }
    number[i]='\0';
    int len=strlen(number);
    for(i=len-1,j=0;i>=0,j<len;i--,j++)
    {
        binary[j]=number[i];
    }
    binary[j]='\0';
    printf("%s",binary);
    return 0;
}