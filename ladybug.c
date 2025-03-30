#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&t);

    while(t--)
    {
        int l;
        scanf("%d",&l);

        char a[l+1],b[l+1];
        scanf("%s",a);getchar();
        scanf("%s",b);getchar();

        int flag=0;

        for(int i=0;a[i]!='\0';i++)
        {
            if(a[i]!=0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            printf("YES\n");
        }

        int index;

        else
        {
            int i=1;
            while(i<l)
            {
                if((a[i]==1 && b[i-1]==0) )// a[i] tomo position e 1 ache ebong b er [i-1] tomo position e 0 ache
                {
                        int temp=a[i];
                        a[i]=b[i-1];
                        b[i-1]=temp;
                }
                else if((a[i]!=0) && (b[i-1]==1))
                {
                    int temp=b[i];
                    b[i]=a[i-1];
                    a[i-1]=b[i];
                }
                    
            }
            i++;
        }
           
    }





}
/*#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t, n;
    cin >> t;

    while(t--) 
    {
        cin >> n;
        string a, b;
        cin >> a >> b;

        // shob gula 0 ache kina
        int flag = 1; 
        for(int i = 0; i < n; i++)
        {
            if(a[i] != '0')
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            cout << "YES" << endl;
            continue;
        }
// -----------------------------------------
        // jodi 0 na hoy
        for(int i=0; i < n; i++)
        {
            if ((a[i] =='1' && b[i - 1] == '0') || (b[i] == '0' && a[i - 1] == '1'))
            {
                swap(a[i], b[i - 1]);
               // cout<<"for if"<< i <<"A "<< a<< "  B "<<b <<endl;
            }
            else if ((a[i] == '1' && b[i-1] == '1') || (b[i] == '1' && a[i - 1] == '1'))
            {
                swap(b[i], a[i - 1]);
                //cout<<"for elseif"<< i <<"A "<< a<< "  B "<<b <<endl;
            }
        }
        
        flag = 1;
        for(int i= 0; i < n; i++)
        {
            if(a[i] != '0')
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
*/