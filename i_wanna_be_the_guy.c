#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);


    int p;
    scanf("%d",&p);


    int x[p];
    for(int i=0;i<p;i++)
    {
        scanf("%d",&x[i]);
    }

    int q;
    scanf("%d",&q);


    int y[q];
    for(int i =0;i<q;i++)
    {
        scanf("%d",&y[i]);
    }
    

    int size= p+q;
    int array[size];
   
   for (int i=0; i<p;i++) 
    {
        array[i]=x[i];
    }
    for (int i=0;i<q;i++) 
    {
        array[p+i]=y[i];
    }

    
    int count=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(array[j]==i)
            {
                count++;
                break;
            }
        }
    }

    if(count==n) 
    {
        printf("I become the guy.\n");
    }
    else 
    {
        printf("Oh, my keyboard!\n");
    }

    return 0;

}