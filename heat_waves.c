#include<stdio.h>
int main()
{
    int t,sum=0;
    scanf("%d",&t);
    int temp[t];
    int i;
    for(i=0;i<t;i++)
    {
        scanf("%d",&temp[i]);
    }
    int new_temp[t],j;
    for(i=0,j=0;i<t;i++)
    {
        if(temp[i]>=1 && temp[i]<=50)
        {
            new_temp[j]=temp[i];
            j++;
        }
    }

    for(i=0;i<j;i++)
    {
        sum=sum+new_temp[i]; 
    }
    float avg;
    avg=sum/(float)j;
    printf("%.2f\n",avg);
    return 0;
}//wrong on test 36