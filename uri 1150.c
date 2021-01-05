#include<stdio.h>
int main()
{
    int n,m,count=1,i,j,sum=0;
    scanf("%d",&n);

    do
    {
        scanf("%d",&m);
    }while(n>=m);
    sum=n;
    do
    {
       ++n;
       sum+=n;
       count++;
    }while(sum<=m);

    printf("%d\n",count);


}
