#include<stdio.h>
int main()
{
    int n;
    double total_bill=0.00;
    scanf("%d",&n);
    while(n--)
    {
        char item_type;
        scanf(" %c",&item_type);
        int price,quantity;
        scanf("%d%d",&price,&quantity);

        double pq=price*quantity;
        double result;

        if(item_type=='F')
        {
            result=((pq)+(pq*0.05)+(pq*0.1));
        }
        else if(item_type=='O')
        {
            result=((pq)+(pq*0.05)+(pq*0.075));
        }
        else if(item_type=='A')
        {
            result=((pq)+(pq*0.05));
        }

        total_bill=total_bill+result;
    }
    printf("%.2lf\n",total_bill);
    return 0;
}