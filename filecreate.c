
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    file=fopen("test.txt","w");
    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else 
    {
        printf("File is opened\n");  
        fclose(file);
    }
    return 0;
}