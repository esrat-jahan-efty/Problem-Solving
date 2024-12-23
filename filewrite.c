//Write in a file
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char arr[101]="Esrat Jahan Efty";
    int length=strlen(arr);
    int i;
    file=fopen("test.txt","w");
    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else 
    {
        printf("File is opened\n");
        for(i=0;i<length;i++)
        {
            fputc(arr[i],file);
        }
        fclose(file);
    }
    return 0;
}