#include<stdio.h>

int main()
{
    double R,A,C;
    scanf("%lf",&R);
    C=3.14159;
    A = (4*C*R*R*R)/3;
    printf("VOLUME = %.3lf\n",A);
    return 0;
}
