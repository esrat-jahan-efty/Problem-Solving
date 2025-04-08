//UNSOLVED
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
         int n,k,x;
        scanf("%d%d%d",&n,&k,&x);

        int a[n];
        for( int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
         int m=n*k,sum=0,count=0;
         int b[n*k];
        
        for( int i=0; i<k; i++) 
        {
            for( int j=0; j<n; j++) 
            {
                
                b[i*n+j] = a[j];
            }
        }

        for(long long int l=0;l<m;l++)/*15 97623 1300111
105 95 108 111 118 101 95 118 97 108 111 114 97 110 116
1 100000 1234567891011*/
        {
            sum=sum+b[l];
            if(sum>=x)
            {
                count++;
            }
        }

        if(count%2==0) 
        {
            printf("%d\n",count+0);
        }
        else
        {
            printf("%d\n",count+1);
        }
        /*
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        for(int i=0;i<(n*k);i++)
        {
            printf("%d ",b[i]);
        }*/

        
    }
}