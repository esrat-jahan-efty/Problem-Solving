#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n+1],alp[27]="abcdefghijklmnopqrstuvwxyz";
    scanf("%s",s);
    getchar();

    int i=0;

    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        i++;
    }

    int j=0,count=0;
    
    while(alp[j]!='\0')
    {
        int k=0;
        while(s[k]!='\0')
        {
            if(s[k]==alp[j])
            {
                count++;
                break;
            }
            k++;
        }
        j++;
    }

    if(count==26)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
    
}