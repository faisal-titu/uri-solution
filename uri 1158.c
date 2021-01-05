#include<stdio.h>
int main()
{
    int i,j,sum=0,x,y,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        sum=0;

        if(x%2==0)
        {
            x++;
            for(j=0;j<y;j++,x+=2)
            {
                sum+=x;
            }
        }
        else
        {
            for(j=0;j<y;j++,x+=2)
            {
                sum+=x;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}
