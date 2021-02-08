
#include <stdio.h>

int main()
{

    int a[2][2][3]= { {{1,2,3}, {4,5,6}},{{7,8,9},{10,11,12}} };

int i,j,k;
    for(i=0; i++; i<2){

        for(j=0; j++; j<2)
        {
            for(k=0; k++; k<3)
            {
                printf(" YOUR MATRIX IS %d",a[i][j][k]);
            }
            printf("\n");
        }
                       }

}
