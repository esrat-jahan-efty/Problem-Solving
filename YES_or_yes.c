#include<stdio.h>
int main ()
{
    int t; scanf("%d",&t);

    while(t--)
    {
        char str[4];
        scanf("%s",str);
        getchar();
        //int y=0,e=0,s=0,total;

        int flag=0;

        if((str[0]=='Y' || str[0]=='y') && (str[1]=='E' || str[1]=='e') && (str[2]=='s' || str[2]=='S'))
        {
            flag=1;
        }

        if(flag==1)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

        
    }
    return 0;
}
        /*if(str[0]=='Y' || str[0]=='y')
        {
            y=1;
        }
        if(str[1]=='E' || str[1]=='e')
        {
            e=1;
        }
        if(str[2]=='s' || str[2]=='S')
        {
            s=1;
        }

        total=y+e+s;

        if(total==3)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }*/
       



    
