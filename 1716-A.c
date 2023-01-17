#include<stdio.h>
int main()
{
    long long int t,n;
    int m3=3,m2=2,a2=2,a3=3;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        if(n==0)
            printf("0\n");
        else if(n%a3==0)
            printf("%lld\n",n/a3);

    }
    return 0;
}
