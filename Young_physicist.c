#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i,x,y,z;
    int s_x=0,s_y=0,s_z=0;

    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&x,&y,&z);

        s_x=s_x+x;
        s_y=s_y+y;
        s_z=s_z+z;
    }

    if(s_x==0 && s_y==0 && s_z==0)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}