#include <stdio.h>

int main() 
{
	int n;
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	getchar();
	
	int A=0,D=0;
	int i=0;
	while(s[i]!='\0')
	{
	    if(s[i]=='A')
	    {
	        A++;
	    }
	    else if(s[i]=='D')
	    {
	        D++;
	    }
	    i++;
	}
	
	if(A>D)
	{
	    printf("Anton\n");
	}
	else if(A<D)
	{
	    printf("Danik\n");
	}
	else
	{
	    printf("Friendship\n");
	}
	return 0;
	

}

