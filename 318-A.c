#include<stdio.h>
int main()
{
    long long int n,k,x;
    scanf("%lld %lld",&n,&k);
    if(n%2==0){
        if(k<=n/2){
            x = 2*k - 1;
            printf("%lld",x);
            return 0;
        }
        else{
            k = k -  n/2;
            x = 2*k;
            printf("%lld",x);
        }
    }
    else{
        if(k<=(n/2)+1){
            x = 2*k - 1;
            printf("%lld",x);
            return 0;
        }
        else{
            k = k -  (n/2 + 1);
            x = 2*k;
            printf("%lld",x);
        }
    }
    return 0;
}
