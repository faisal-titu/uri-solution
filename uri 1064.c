#include<stdio.h>
int main()
{
    float a,sum=0,avg;
    int total=0,i;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&a);
        if(a>0){
            total++;
        sum=sum+a;
        }

    }
    printf("%d valores positivos\n",total);
    printf("%0.1f\n",sum/total);
    return 0;

}

