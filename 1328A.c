#include<stdio.h>
int main()
{
    long long int n,a,b,count=0;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld %lld",&a,&b);
        if(a%b!=0)
        {
            count = b - a%b;
        }
        printf("%lld\n",count);
        count = 0;
    }
    return 0;
}
