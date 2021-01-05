#include<stdio.h>
int main()
{
    int h,hh,hd,m,mm,md,s,ss,sd,d,dd,ddd;
    char a[4],b[4],c[3],x[3],e[3],f[3];
    scanf("%s%d", a,&d);
    scanf("%d%s%d%s%d", &h,&c,&m,&x,&s);
    scanf("%s%d", &b,&dd);
    scanf("%d%s%d%s%d", &hh, &e,&mm,&f,&ss);

    sd=ss-s;
    md=mm-m;
    hd=hh-h;
    ddd=dd-d;

    if(sd<0)
    {
        sd+=60;
        md--;
    }
    if(md<0)
    {
        md+=60;
        hd--;
    }
    if(hd<0)
    {
        hd+=24;
        ddd--;
    }

    printf("%d dia(s)\n",ddd);
    printf("%d hora(s)\n",hd);
    printf("%d minuto(s)\n",md);
    printf("%d segundo(s)\n",sd);


    return 0;

}
