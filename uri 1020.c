#include<stdio.h>
int main()
{
    int D,Y,y,M,m;
    scanf("%d",&D);

    Y=D/365;
    y=D%365;
    M=y/30;
    m=y%30;

    printf("%d ano(s)\n",Y);
    printf("%d mes(es)\n",M);
    printf("%d dia(s)\n",m);

    return 0;
}
