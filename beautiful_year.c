#include<stdio.h>
int main()
{
    int y,year;
    scanf("%d",&y);
    y=y+1;

    int fr,thrd,sec,fs;

    for(;;)
    {
        year=y;
        fr=y%10;   y=y/10;
        thrd=y%10; y=y/10;
        sec=y%10;
        fs=y/10;

        if(fr!=thrd && fr!=sec && fr!=fs && thrd!=sec && thrd!=fs && sec!=fs)
        {
            printf("%d\n",year);
            break;
        }
        y=year+1;
            
    }

    return 0;
    
}