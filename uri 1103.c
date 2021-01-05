#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,h,m,total;

    while(1)
    {
        scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
        if(h1==0 && h2==0 && m1==0 && m2==0)
            break;

        h=h2-h1;
        m=m2-m1;
        total=0;
        if(h==0 && m==0)
        {
            total=1440;
        }
        else if(h==0 && m>0)
        {
            total=m;
        }
        else if(h==0 && m<0)
        {
            total=1440+m;
        }
        else if(h<0)
        {
            total=(h+24)*60 + m;
        }
        else if(h>0)
        {
            total=h*60 + m;
        }
        printf("%d\n",total);
    }

    return 0;
}
