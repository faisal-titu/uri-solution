#include<stdio.h>
int main()
{
    int a,b,c,d;
    float price=0;
    scanf("%d%d",&a,&b);

    if(a==1)
    {
        price=(float)(4.00*b);
    }
    else if(a==2)
    {
       price=(float)(4.50*b);
    }
    else if(a==3)
    {
        price=(float)(5.00*b);
    }
    else if(a==4)
    {
        price=(float)(2.00*b);
    }
    else if(a==5)
    {
        price=(float)(1.50*b);
    }


    printf("Total: R$ %.2f\n",price);

    return 0;

}
