#include<stdio.h>
int main()
{
    long long int X=0,Y=0,sum1=0,sum2=0,sum3=0;
    scanf("%lld%lld",&X,&Y);
    sum1=X+Y;
    sum2=X*Y;
    sum3=X-Y;
    printf("%lld + %lld = %lld\n",X,Y,sum1);
    printf("%lld * %lld = %lld\n",X,Y,sum2);
    printf("%lld - %lld = %lld\n",X,Y,sum3);
    return 0;
}
