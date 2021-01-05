#include<stdio.h>
int main()
{
    int i,j,x,y,sum=0,n,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        if(x==y)
        {
            z=0;
            printf("%d\n",z);
        }
        else if(x>y)
        {
            for(j=y+1,sum=0;j<x;j++)
            {
                if(j%2==1||j%2==-1)
                {
                    sum=sum+j;
                }

            }
            printf("%d\n",sum);
        }
        else
        {
            for(j=x+1,sum=0;j<y;j++)
            {
                if(j%2==1||j%2==-1)
                {
                    sum=sum+j;
                }

            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
