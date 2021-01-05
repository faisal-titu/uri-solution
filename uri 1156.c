#include<stdio.h>
int main()
{
    float i,s=0,a=1;

    for(i=1;i<=39;i+=2)
    {
        s+=i/a;
        a*=2;
    }
    printf("%.2f\n",s);

    return 0;
}

