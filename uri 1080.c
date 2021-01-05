#include<stdio.h>
int main()
{
    int a,i,max=0,pos;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
            pos=i;
        }
    }
    printf("%d\n",max);
    printf("%d\n",pos);

    return 0;

}
