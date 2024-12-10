#include<stdio.h>
#include<string.h>
int main()
{
    char str[101],n_str[101];
    scanf("%s",str);
    getchar();
   int i=0,j=0,flag,k;
   while(str[i]!='\0')
   {
      flag=0;
      for(k=0;k<j;k++)
      {
        if(n_str[k]==str[i])
        {
            flag=1;
            break;
        }
      }
      if(flag==0)
      {
        n_str[j]=str[i];
        j++;
      }
      i++;
   }
   n_str[j]='\0';
   int length=strlen(n_str);
   if(length%2!=0)
   {
    printf("IGNORE HIM!\n");
   }
   else{
    printf("CHAT WITH HER!\n");
   }
   return 0;

}