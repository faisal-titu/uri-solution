#include<stdio.h>
int main()
{
    int n,z[5],i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&z[i]);
    }

    for(i=0;i<n;i++)
    {
        if(z[i]>127)
            continue;
        else
            printf("%d",i+1);
    }

}
