//MEMORY LIMIT EXCEEDED ON TEST 8


#include<stdio.h>
int main()
{

    long long int n,pos_num;
    scanf("%lld%lld",&n,&pos_num);


    long long int array[n];
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

    /*for(int j=0;j<n;j++)
    {
        printf("%lld  ",array[j]);
    }*/

   printf("%lld\n",array[pos_num-1]);

   return 0;
}