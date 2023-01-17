#include<stdio.h>
int main()
{
    long long int x1,x2,x3,x4,sum;
    scanf("%lld %lld %lld %lld",&x1,&x2,&x3,&x4);
    sum = (x1+x2+x3+x4)/3;
    if(x1==sum)
        printf("%lld %lld %lld",sum-x4,sum-x3,sum-x2);
    else if(x2==sum)
        printf("%lld %lld %lld",sum-x4,sum-x3,sum-x1);
    else if(x3==sum)
        printf("%lld %lld %lld",sum-x4,sum-x2,sum-x1);
    else
        printf("%lld %lld %lld",sum-x3,sum-x2,sum-x1);
    return 0;
}
