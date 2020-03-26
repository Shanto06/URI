#include<stdio.h>

int main()
{
    char nam[30];
    gets(nam);
     double TOTAL,salary,product;
    scanf("%lf%lf",&salary,&product);

    TOTAL = salary+product*0.15;
    printf("TOTAL = R$ %.2lf\n",TOTAL);

    return 0;
}
