#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,R1,R2,det;
    scanf("%f%f%f",&a,&b,&c);

    det=b*b-4*a*c;

    R1=(-b+sqrt(det))/(2*a);
    R2=(-b-sqrt(det))/(2*a);

    if(a!=0 && det>0)
    {
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;


}
