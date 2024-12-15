#include<stdio.h>
int main()
{
    int mat[5][5];
    int i,j,row,col;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(mat[i][j] == 1)
            {
                row=i+1;
                col=j+1;
                break;
            }
        }
        
    }
    int count,count_row=0,count_col=0;
    while(row!=3)
    {
        if(row<3)
        {
            row++;
        }
        else if(row>3)
        {
            row--;
        }
        count_row++;
    }
    while(col!=3)
    {
        if(col<3)
        {
            col++;
        }
        else if(col>3)
        {
            col--;
        }
        count_col++;
    }
    count=count_row+count_col;
    printf("%d\n",count);
    
}