#include<stdio.h>
int main()
{
    int i,j,n,x=1,y=4;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=x;j<=y;j++)
        {
            if(j%4==0)
            {
                printf("PUM\n");
            }
            else
            {
                printf("%d ",j);
            }
        }
        x=x+4;
        y=y+4;
    }
    return 0;
}
