#include<stdio.h>
#include<string.h>
int main()
{
    char s[105];
    scanf("%s",s);
    getchar();

    char word[6]="hello",output[105];
    
    int i,j=0;int k=0;

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==word[j])
        {
            output[k]=s[i];
            k++;
            j++;
            if(j==5) break;
        }

    }
    output[k]='\0';
    
    int result=strcmp(output,word);

    if(result==0)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;

}