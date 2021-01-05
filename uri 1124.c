#include<stdio.h>
int main()
{
    int a,b,c,d;

    while(1)
    {
        scanf("%d%d%d%d",&a,&b,c,&d);

        if(a==0 && b==0 && c==0 && d==0)
        {
            break;
        }

        if(a>=2*(c+d) && b>=2*(c+d))
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}
