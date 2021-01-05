#include<stdio.h>

int main()
{
    double N1,N2,N3,N4,avg,sum;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    avg=(N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %0.1lf\n",avg);

    if(avg>=7.0)
    {
    printf("Aluno em exame.\n");
    }
    if(avg<5.0)
    {
        printf("Aluno aprovado.\n");
    }

    if(avg>5.0 && avg<7)
    {
        printf("Aluno em exame.\n");
        printf("Nota do exame: ");
        scanf("%lf",&sum);
        avg=(avg+sum)/2;
        if(avg>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(avg<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",avg);
    }

    return 0;

}
