#include<stdio.h>
int main()
{
    int n,i,a,C=0,R=0,S=0,t;
    char b,x='%';
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %c",&a,&b);
        if(b=='C')
        {
            C=C+a;
        }
        else if(b=='R')
        {
            R=R+a;
        }
        else if(b=='S')
        {
            S=S+a;
        }

    }
    t=C+R+S;

    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2f %c\n",(float)(C*100)/t,x);
    printf("Percentual de ratos: %.2f %c\n",(float)(R*100)/t,x);
    printf("Percentual de sapos: %.2f %c\n",(float)(S*100)/t,x);

    return 0;
}
