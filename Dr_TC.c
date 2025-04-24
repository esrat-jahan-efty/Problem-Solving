#include <stdio.h>
#include<string.h>

int main() {
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int l,count=0;
	    scanf("%d",&l);
	    char s[l];
	    scanf("%s",s);
	    getchar();
	    
	    for(int i=0;i<l;i++)
	    {
	        char s2[l];
	        strcpy(s2,s);
	        if(s2[i]=='0') 
	        {
	            s2[i]='1'; 
	        }
	        else if(s2[i]=='1')
	        {
	            s2[i]='0';
	        }
	        int j;
	        for(j=0;j<l;j++)
	        {
	            if(s2[j]=='1')
	            { 
	                count++;
	            }
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}

