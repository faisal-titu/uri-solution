#include<stdio.h>
int main()
{
    float n,sum=0,d=0,b;

    while(1)
    {
        if(d==2)
            break;
        scanf("%f",&n);

        if(n>=0 && n<=10)
        {
            d++;
            sum=sum+n;
        }
        else
            printf("nota invalida\n");
    }
    printf("media = %.2f\n",sum/2.00);
    return 0;
}
