#include<stdio.h>
int main()
{
    int n,i;
    scanf("%i",&n);

    for(i=1;i<=1000;i++)
    {
        if(i%n==2)
        {
            printf("%i\n",i);
        }
    }
    return 0;

}
