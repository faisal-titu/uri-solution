#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,g,h,i,j,k,l,m;
    scanf("%d",&n);
    if(n!=0 && n<1000000)
    {
        printf("%d\n",n);
    }
    else
    {
        printf("not valid\n");
    }
    a=n/100;
    printf("%d nota(s) de R$ 100,00\n",a);
    b=n%100;
    c=b/50;
    printf("%d nota(s) de R$ 50,00\n",c);
    d=b%50;
    e=d/20;
    printf("%d nota(s) de R$ 20,00\n",e);
    f=d%20;
    g=f/10;
    printf("%d nota(s) de R$ 10,00\n",g);
    h=f%10;
    i=h/5;
    printf("%d nota(s) de R$ 5,00\n",i);
    j=h%5;
    k=j/2;
    printf("%d nota(s) de R$ 2,00\n",k);
    l=j%2;
    m=l/1;
    printf("%d nota(s) de R$ 1,00\n", m);

    return 0;
}
