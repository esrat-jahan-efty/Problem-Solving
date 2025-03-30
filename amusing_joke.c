#include<stdio.h>
#include<string.h>
int main()
{
    char gst_nm[102],host[102],pile[102];

    scanf("%s",gst_nm);getchar();
    scanf("%s",host);getchar();
    scanf("%s",pile);getchar();

    strcat(gst_nm,host);
    
    int l=strlen(gst_nm);
    int p=strlen(pile);

    for(int i=0;i<l-1;i++)
    {
        for(int j=0;j<l-1;j++)
        {
            if(gst_nm[j]>gst_nm[j+1])
            {
                char temp=gst_nm[j];
                gst_nm[j]=gst_nm[j+1];
                gst_nm[j+1]=temp;
            }
        }
    }
    for(int i=0;i<l-1;i++)
    {
        for(int j=0;j<l-1;j++)
        {
            if(pile[j]>pile[j+1])
            {
                char temp=pile[j];
                pile[j]=pile[j+1];
                pile[j+1]=temp;
            }
        }
    }

    int flag=0;

    for(int i=0;i<l;i++)         
    {
        if(gst_nm[i]!=pile[i])
        {
            flag=1;
        }
    }

    if(flag==0 && l==p)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;


}
