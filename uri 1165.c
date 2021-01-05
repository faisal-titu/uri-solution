#include<stdio.h>
int main()
{
    int n,i,x,j,prime=1;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        prime=1;
        scanf("%d",&x);

        for(j=2;j<x;j++)
        {
            if(x%j==0)
            {
                prime=0;
            }
        }
        if(prime==1)
        {
            printf("%d eh primo\n",x);
        }
        else
        {
            printf("%d nao eh primo\n",x);
        }
    }
}
