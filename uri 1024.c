#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,len,k;
    char z[1000],y[1000];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(z);
        len=strlen(z);
        for(j=0;j<len;j++)
        {
            if((z[j]>='A' && z[j]<='Z') || (z[j]>='a' && z[j]<='z') )
            {
                z[j]+=3;
            }
        }
        k=len-1;
        for(j=0;j<len;j++)
        {
            y[j]=z[k];
            k--;
        }
        y[j]='\0';
        //printf("%s\n",y);

        for(j=len/2;j<len;j++)
        {
            y[j]-=1;
        }
        printf("%s\n",y);
    }

    return 0;
}
