#include <stdio.h>
#include<string.h>
int main() 
{
 char z[10];
 int a,n,count=0,i,j,k,p;
 scanf("%s",z);
 a=strlen(z);
 for(i=0;i<a;i++)
 {
     for(j=i+1;j<a;j++)
     {
         if(z[i]==z[j])
         {
             for(p=i,k=j;p<j,k>=i;p++,k--)
             {
                 if(z[i]==z[k])
                 count++;
             }
         }
     }
 }
 n=a-count;
 printf("%d",n);
return 0;
}
