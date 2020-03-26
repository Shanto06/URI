#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,n,g,h,i,j,k,l,m;
    scanf("%d",&n);
    printf("%d\n",n);
    a=n/100;
    b=n-a*100;
    c=b/50;
    d=b-c*50;
    e=d/20;
    f=d-e*20;
    g=f/10;
    h=f-g*10;
    i=h/5;
    j=h-i*5;
    k=j/2;
    l=j-k*2;
    m=l/1;
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",a,c,e,g,i,k,m);
}
