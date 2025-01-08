#include<stdio.h>
int main()
{
    int num,fence_h;
    scanf("%d%d",&num,&fence_h);

    int heights[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&heights[i]);
    }

    for(int i=0;i<num;i++)
    {
        if(heights[i]>fence_h)
        {
            heights[i]=2;
        }
        else
        {
            heights[i]=1;
        }
    }

    int width=0;

    for(int i=0;i<num;i++)
    {
       width+=heights[i];
    }

    printf("%d\n",width);

    return 0;
    
}