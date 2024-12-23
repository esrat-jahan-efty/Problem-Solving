#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char arr[101];
    int length=strlen(arr);
    int i;
    file=fopen("test.txt","a");
    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else 
    {
        printf("File is opened\n");
        gets(arr);
        
        fputs(arr,file);
        fputs("\n",file);
        fclose(file);
    }
    return 0;
}