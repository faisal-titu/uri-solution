#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f",&a);

    if(a>=0 && a<=2000.00)
    {
        printf("Isento\n");
    }
    else if(a>2000.00 && a<=3000.00)
    {
        a-=2000;
        printf("R$ %0.2f\n",a*0.08);
    }
    else if(a>3000.00 && a<=4500.00)
    {
        a-=3000;
        printf("R$ %0.2f\n",a*0.18+80);
    }
    else if(a>4500.00)
    {
        a-=4500;
        printf("R$ %0.2f\n",a*0.28+350);
    }

    return 0;

}
