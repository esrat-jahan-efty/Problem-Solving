#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);

    int area_board=m*n;
    int area_domino=2*1;

    int ans=area_board/area_domino;

    printf("%d\n",ans);
}