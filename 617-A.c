#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int n, steps;
    scanf("%lld",&n);
    if(n==0){
        steps = 0;
    }

    else if(n>0 && n<=5){
        steps = 1;
    }

    else if(n>5 && n<=1000000){
        if(n%5!=0)
            steps = n/5+1;
        else
            steps = n/5;
    }
    else{
        steps = 200000;
    }

    printf("%lld",steps);

    return 0;
}
