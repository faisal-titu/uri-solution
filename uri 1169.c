#include<stdio.h>
int main()
{
    int x,i,m;
    long long int n;
    scanf("%d",&m);

    for(i=0; i<m; i++)
    {
        scanf("%d",&x);
        n=(pow(2,x))/12000;
        printf("%lld kg\n",n);
    }
    return 0;


}
