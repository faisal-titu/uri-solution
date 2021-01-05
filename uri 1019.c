#include<stdio.h>
int main()
{
    int n,H,h,M,m,S,s;
    scanf("%d",&n);
    H=n/3600;
    h=n%3600;
    M=h/60;
    S=h%60;

    printf("%d:%d:%d\n",H,M,S);



    return 0;
}
