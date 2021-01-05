#include<stdio.h>
int main()
{
    int n,i;
    float a,b,c,d,e,f,g,h,j;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%f%f%f",&a,&b,&c);
        printf("%.1f\n",(a*2+b*3+c*5)/10);

    }
    return 0;

}
