#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char arr[101];
    file=fopen("test.txt","a");
    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else 
    {
        printf("File is opened\n");
        gets(arr);
        fputs("\n",file);
        fputs(arr,file);
        
        fclose(file);
    }
    return 0;
}