#include<stdio.h>
int main ()
{
   long long int A,B,C,D,X;
   scanf("%lld %lld %lld %lld",&A,&B,&C,&D);
   long long int sum1,sum2;
   sum1=A*B;
   sum2=C*D;
   X=sum1-sum2;
   printf("Difference = %lld",X);
    return 0;
}
