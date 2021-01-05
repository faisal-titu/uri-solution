#include<stdio.h>
int main()
{
    int i,m,x;
    float n;
    scanf("%d",&x);

    for(i=0; i<x; i++)
    {
        scanf("%f",&n);
        m=0;
        while(n>1)
        {
            n/=2;
            m++;
        }
        printf("%d dias\n",m);
    }


    return 0;
}
