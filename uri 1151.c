#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,next;
    scanf("%d",&n);

    if(n==1)
    {
        printf("0\n");
        return 0;
    }

    for(i=1;i<n;i++)
    {
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
    }
    printf("%d\n",a);
}
