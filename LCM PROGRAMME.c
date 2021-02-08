#include<stdio.h>
int main()
         {
             int a,b,L;
             printf("enter two no.::\n");
             scanf("%d%d",&a,&b);

             for(L=a>b?a:b;L<a*b;L++)
                   if(L%a==0 && L%b==0)
                       break;
                 printf("The LCM is ::-->%d<--::",L);
                 return 0;

         }
