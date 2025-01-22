#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,i,sum=0;
    scanf("%lld",&n);

    char t[12]="Tetrahedron";
    char c[5]="Cube";
    char o[12]="Octahedron";
    char d[13]="Dodecahedron";
    char ic[12]="Icosahedron";

    
    

    for(i=1;i<=n;i++)
    {
        char str[101];
        scanf("%s",str);
        getchar();

        if(strcmp(str,t)==0)
        {
            sum=sum+4;
        }
        else if(strcmp(str,c)==0)
        {
            sum=sum+6;
        }
        else if(strcmp(str,o)==0)
        {
            sum=sum+8;
        }
        else if(strcmp(str,d)==0)
        {
            sum=sum+12;
        }
        else if(strcmp(str,ic)==0)
        {
            sum=sum+20;
        }
    }
    
    printf("%lld\n",sum);
}