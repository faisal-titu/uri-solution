#include<stdio.h>
int main()
{
    long int n,i,j,sum;
    char z[100];
    scanf("%ld",&n);

    for(i=0; i<n; i++)
    {
        sum=0;
        scanf("%s",z);
        for(j=0; j<strlen(z); j++)
        {
            if(z[j]=='1')
                sum+=2;
            else if(z[j]=='2' || z[j]=='3' || z[j]=='5')
                sum+=5;
            else if(z[j]=='4')
                sum+=4;
            else if(z[j]=='6'|| z[j]=='9' || z[j]=='0')
                sum+=6;
            else if(z[j]=='7')
                sum+=3;
            else if(z[j]=='8')
                sum+=7;
        }
        printf("%ld leds\n",sum);
    }

    return 0;
}
