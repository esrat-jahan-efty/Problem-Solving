#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char ch[101];
    file=fopen("test.txt","r");
    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else 
    {
        printf("File is opened\n");
        while(!feof(file))
        {
            fgets(ch,100,file);
            printf("%s",ch);
        }
        fclose(file);
    }
    return 0;
}