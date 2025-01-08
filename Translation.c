#include <stdio.h>
#include<string.h>
int main() 
{
	char s[101],t[101];
	scanf("%s",s);
	getchar();
	scanf("%s",t);
	getchar();
	
	int len_s=strlen(s);
	int len_t=strlen(t);
	
	int i,j,count=0;
	
	for(i=0,j=len_t-1;i<=len_s-1,j>=0;i++,j--)
	{
	    if(s[i]==t[j])
	    {
	        count++;
	    }
	}
	if(count==len_s && count==len_t)
	{
	    printf("YES\n");
	}
	else
	{
	    printf("NO\n");
	}
	return 0;
	

}

