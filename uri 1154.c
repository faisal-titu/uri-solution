#include<stdio.h>
int main()
{
    int n,sum=0,a=0;

    while(1)
    {
        scanf("%d",&n);
        if(n<0)
            break;
        else
            a++;
            sum+=n;
    }
    printf("%.2f\n",(float)sum/a);

    return 0;
}
