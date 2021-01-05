#include<stdio.h>
int main()
{
    double a,b=0,c,d;
    int option,media=1;
    while(1)
    {
        a=0;
        d=0;
        while(1)
        {
            if(a==2)
                break;
            scanf("%lf",&c);
            if(c>=0 && c<=10)
            {
                a++;
                d=d+c;
            }
            else
                printf("nota invalida\n");
        }
        d=d/2;
        printf("media = %.2lf\n",d);
        printf("novo calculo (1-sim 2-nao)\n");

        while(1)
        {
            scanf("%d",&option);
            if(option!=1 && option !=2)

                printf("novo calculo (1-sim 2-nao)\n");
            else
                break;
        }
        if(option==2)
            break;
    }
  return 0;

}
