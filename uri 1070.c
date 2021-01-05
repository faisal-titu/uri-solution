#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    a++;

    for(i=1;i<=6;i++)
    {
        printf("%d\n",a);
        a+=2;
    }
    return 0;
}
