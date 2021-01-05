#include<stdio.h>
int main()
{
    int n,i,j,sum=0,n1;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&n1);
        sum=0;
        for(j=1;j<n1;j++)
        {
            if(n1%j==0)
            {
                sum+=j;
            }
        }
        if(sum==n1)
        {
            printf("%d eh perfeito\n",n1);
        }
        else
        {
            printf("%d nao eh perfeito\n",n1);
        }
    }
}
