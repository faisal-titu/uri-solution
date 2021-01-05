#include<stdio.h>
int main()
{
    float a;
    int total=0,i;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&a);
        if(a>0)
            total++;
    }
    printf("%d valores positivos\n",total);

    return 0;

}
