#include<stdio.h>
int main()
{
    char employee;
    double salary,sold,total_salary;
    scanf("%s%lf%lf",&employee,&salary,&sold);
    total_salary = salary+(sold*.15);
    printf("TOTAL = R$ %0.2lf\n",total_salary);
    return 0;
}
