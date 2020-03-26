#include<stdio.h>

int main()
{
    double z1,x,a,c,d,f,p,o,g,i,j,l,m,s,r,v,u,y,x1,x2,x4,x5,x7,x8;
    int b,e,h,k,n,t,w,z,q,x3,x6;
    scanf("%lf",&z1);
    printf("NOTAS:\n");
    a=(double)z1/100;
    b=(int)a;
    c=z1-b*100;
    printf("%d nota(s) de R$ 100.00\n",b);
    d=(double)c/50;
    e=(int)d;
    f=c-e*50;
    printf("%d nota(s) de R$ 50.00\n",e);
    g=(double)f/20;
    h=(int)g;
    i=f-h*20;
    printf("%d nota(s) de R$ 20.00\n",h);
    j=(double)i/10;
    k=(int)j;
    l=i-k*10;
    printf("%d nota(s) de R$ 10.00\n",k);
    m=(double)l/5;
    n=(int)m;
    o=l-n*5;
    printf("%d nota(s) de R$ 5.00\n",n);
    p=(double)o/2;
    q=(int)p;
    r=o-q*2;
    printf("%d nota(s) de R$ 2.00\n",q);
    printf("MOEDAS:\n");
    s=(double)r/1;
    t=(int)s;
    u=r-t*1;
    printf("%d moeda(s) de R$ 1.00\n",t);
    v=(double)u/0.50;
    w=(int)v;
    x=u-w*0.50;
    printf("%d moeda(s) de R$ 0.50\n",w);
    y=(double)x/0.25;
    z=(int)y;
    x1=x-z*0.25;
    printf("%d moeda(s) de R$ 0.25\n",z);
    x2=(double)x1/0.10;
    x3=(int)x2;
    x4=x1-x3*0.10;
    printf("%d moeda(s) de R$ 0.10\n",x3);
    x5=(double)x4/0.05;
    x6=(int)x5;
    x7=x4-x6*0.05;
    printf("%d moeda(s) de R$ 0.05\n",x6);
    x8=(double)x7/0.01;
    printf("%.0lf moeda(s) de R$ 0.01\n",x8);
    return 0;
}

