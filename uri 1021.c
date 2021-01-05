#include<stdio.h>
#include<math.h>
int main()
{
    float n,a,b,c,d,e,f,g,h,i,j,k,l,m,A,B,C,D,E,F,G,H,I,J;
    scanf("%f",&n);

    printf("NOTAS:\n");
    a=n/100.00;
    printf("%.0f nota(s) de R$ 100.00\n",floor(a));
    b=fmod(n,100.00);
    c=b/50;
    printf("%.0f nota(s) de R$ 50.00\n",floor(c));
    d=fmod(b,50.00);
    e=d/20;
    printf("%.0f nota(s) de R$ 20.00\n",floor(e));
    f=fmod(d,20.00);
    g=f/10;
    printf("%.0f nota(s) de R$ 10.00\n",floor(g));
    h=fmod(f,10.00);
    i=h/5;
    printf("%.0f nota(s) de R$ 5.00\n",floor(i));
    j=fmod(h,5.00);
    k=j/2;
    printf("%.0f nota(s) de R$ 2.00\n",floor(k));

    printf("MOEDAS:\n");
    l=fmod(j,2.00);
    m=l/1;
    printf("%.0f moeda(s) de R$ 1.00\n",floor(m));
    A=fmod(l,1.00);
    B=A/0.50;
    printf("%.0f moeda(s) de R$ 0.50\n", floor(B));
    C=fmod(A,0.50);
    D=C/0.25;
    printf("%.0f moeda(s) de R$ 0.25\n", floor(D));
    E=fmod(C,0.25);
    F=E/0.10;
    printf("%.0f moeda(s) de R$ 0.10\n",floor(F));
    G=fmod(E,0.10);
    H=G/0.05;
    printf("%.0f moeda(s) de R$ 0.05\n",floor(H));
    I=fmod(G,0.05);
    J=I/0.01;
    printf("%.0f moeda(s) de R$ 0.01\n",(J));




    return 0;
}
