#include<stdio.h>

int main()
{
    long long int t, n;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        if(n<3)
            printf("0\n");
        else if(n%2!=0)
            printf("%lld\n",n/2);
        else
            printf("%lld\n",(n/2)-1);
    }
    return 0;
}
