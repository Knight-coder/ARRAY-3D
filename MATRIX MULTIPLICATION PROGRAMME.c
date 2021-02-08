#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],product[10][10];
    int arow,acoloumn,brow,bcoloumn;
    int i,j,k;
    int sum=0;

    printf("ENTER ROWS AND COLOUMN OF MATRIX A");
    scanf("%d%d",&arow,&acoloumn);

    printf("ENTER ELEMENTS OF MATRIX A\n");
    for(i=0; i<arow; i++)
        for(j=0; j<acoloumn; j++)
            scanf("%d",&a[i][j]);

    printf("ENTER ROWS AND COLOUMN OF MATRIX B");
    scanf("%d%d",&brow,&bcoloumn);

    if(brow!=acoloumn)
        printf("WE CAN'T MULTILPLY MATRIX{ERROR ANANYA!!!!!!!!!!}");
    else
        printf("ENTER ELEMENTS OF MATRIX b\n");
    for(i=0; i<brow; i++)
        for(j=0; j<bcoloumn; j++)
            scanf("%d",&b[i][j]);


    printf("\n");

    for(i=0; i<arow; i++)
    {
        for(j=0; j<bcoloumn; j++)
        {
            for(k=0; k<brow; k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
            product[i][j]=sum;
            sum=0;
        }
    }
    printf("RESULTANT MATRIX IS \n");

    for(i=0; i<arow; i++)
    {
        for(j=0; j<bcoloumn; j++)
        {
            printf(" [   %d   ] ",product[i][j]);
        }
        printf("\n");
        printf("\n");
        printf("\n");
    }

    return 0;


}
