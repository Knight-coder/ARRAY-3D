#include<stdio.h>
#include<math.h>
int main()
{
    int a,val1,val2,i,count=0;
    printf("Enter the no.::\n");
    scanf("%d",&a);
    val1=ceil(sqrt(a));
    val2= a ;

    for(i=2; i<=val1; i++)
    {
        if(val2%i==0)
            count=1;
    }
    if(count==0 || a==2||a==3 && a!=1)
    {
        printf("%d is Prime No.....",a);

    }
    else if(val2==1)
    {
        printf("%d is a CoPrime No.....",a);
    }
    else
    {
        printf("%d is not a Prime No......",a);
    }
    return 0;
}
