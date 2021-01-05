#include<stdio.h>
 int main()

 {
    int time ,speed,distance;
    float fuel;
    scanf("%d%d",&time,&speed);
    distance=time*speed;
    fuel=(float)distance/12;
    printf("%0.3f\n",fuel);

    return 0;


 }
