#include<stdio.h>
int main()
{

    int array[3][3];

    int i,j;
    printf("enter elements array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
   printf("YOUR MATRIX IS\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf(" %d   ",array[i][j]);
       }
       printf("\n");
       printf("\n");
       printf("\n");
   }

    return 0;

}
