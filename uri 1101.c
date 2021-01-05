#include<stdio.h>
int main()
{
  int x,y,z,sum=0,i;

  while(1)
  {
          scanf("%d%d",&x,&y);

      if(x<=0 || y<=0)
      {
          break;
      }

      else
      {
          sum=0;

         if(x>y)
          {
              for(i=y;i<=x;i++)
              {
                  printf("%d ",i);
                  sum+=i;
              }
              printf("Sum=%d\n",sum);
          }
          else
           {
              for(i=x;i<=y;i++)
              {
                  printf("%d ",i);
                  sum+=i;
              }
              printf("Sum=%d\n",sum);
          }
      }
  }
  return 0;
}
