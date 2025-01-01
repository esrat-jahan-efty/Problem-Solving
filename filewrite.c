//Write in a file
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char str[101]="Esrat Iftekhar";
    int length=strlen(str);
    int i;
    file=fopen("test.txt","w");
    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else 
    {
        printf("File is opened\n");
        for(i=0;str[i]!='\0';i++)
        {
            fputc(str[i],file);
        }
        fclose(file);
    }
    return 0;
}