#include<stdio.h>
int main()
{
    int rows;
    printf("enter the no. of Rows::");
    scanf("%d",&rows);

    int num=1,i,j;
    for(i=0; i<=rows; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
