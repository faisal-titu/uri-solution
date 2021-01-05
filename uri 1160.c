#include<stdio.h>
int main()
{
    int n,i,a,b,year=0,x=0;
    float ra,rb;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        year=0;
        x=0;
        scanf("%d%d%f%f",&a,&b,&ra,&rb);

        while(a<=b)
        {
            year++;
            a+=(a*ra)/100;
            b+=(b*rb)/100;
            if(year>100)
            {
                x=1;
                break;
            }
        }
        if(x==0)
        {
            printf("%d anos.\n",year);
        }
        else
        {
            printf("Mais de 1 seculo.\n");
        }
    }

    return 0;
}
