#include<stdio.h>
int main()

{
    int n; scanf("%d",&n);

    char s[n+1],t[n+1];
    scanf("%s",s);getchar();
    scanf("%s",t);getchar();

    int count=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            count++;
        }
    }

    printf("%d\n",count);

    return 0;


}