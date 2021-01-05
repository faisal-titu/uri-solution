#include<stdio.h>
int main()
{
    int num1,num2,rem,gcd,i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&num1,&num2);
        while(num2!=0)
        {
            rem=num1%num2;
            num1=num2;
            num2=rem;
        }
        gcd=num1;
        printf("%d\n",gcd);
    }

    return 0;
}

