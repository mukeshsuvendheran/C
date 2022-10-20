#include<stdio.h>
int main()
{
    float basic_s =10000.00,dear_a_s, house_a_s, gross_salary;

    printf("enter the basic salary:%f\n",basic_s);
    //scanf("%f",&basic_s);
    printf("dear_a_s: %0.2f\n",basic_s *0.4);
    printf("house_a_s:%0.2f\n",basic_s*0.2);
    //gross_salary= basic_s+dear_a_s+house_a_s;
    printf("gross_salary:%0.2f",basic_s+dear_a_s+house_a_s);
    //printf("gross_salary:%f",gross_salary);

}
/*

#include<stdio.h>
int main()
{
    float basic_s,dear_a_s, house_a_s, gross_salary;

    printf("enter the basic salary:\n");
    scanf("%f",&basic_s);
    dear_a_s=basic_s*0.4;
    house_a_s=basic_s*0.2;
    gross_salary= basic_s+dear_a_s+house_a_s;
    printf("dear_a_s: %0.2f\n",dear_a_s);
    printf("house_a_s:%0.2f\n",house_a_s);
    printf("gross_salary:%0.2f",gross_salary);

}*/