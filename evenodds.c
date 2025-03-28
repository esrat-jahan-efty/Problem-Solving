#include<stdio.h>
int main()
{
    long long int n,pos_num,ans;
    scanf("%lld%lld",&n,&pos_num);
    long long int total_odds=(n+1)/2;

    if(pos_num<=total_odds)
    {
        ans=2*pos_num-1;
    }
    else
    { 
        ans=2*(pos_num-total_odds);
    }

    printf("%lld\n",ans);

//1000000000000 
//500000000001


     //MEMORY LIMIT EXCEEDED ON TEST 8
    /*long long int array[n];
    long long int odd_val_pos=0,even_val_pos=((n+1)/2),i=1;



    while(i<=n)
    {
        if(i%2==0)
        {
            array[even_val_pos]=i;
            even_val_pos++;
        }


        else
        {
            array[odd_val_pos]=i;
            odd_val_pos++;
        }


        i++;

    }

    for(int j=0;j<n;j++)
    {
        printf("%lld  ",array[j]);
    }

   printf("%lld\n",array[pos_num-1]);*/

   return 0;
}