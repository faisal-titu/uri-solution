#include<stdio.h>
int main()
{
    int a,b,i,j,x,c,z[20000]={0};
    while(1)
    {
        x=0;
        scanf("%d%d",&a,&b);
        if(a==0 && b==0)
            break;

        for(i=0; i<b; i++)
        {
            scanf("%d",&c);
            z[c]++;
        }

        for(i=0; i<=a; i++)
        {
            if(z[i]>1)
            {
                x++;
            }
        }
        printf("%d\n",x);
    }

    return 0;
}
