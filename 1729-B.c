#include<stdio.h>
int main()
{
    long long int t,n,num,i;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        scanf("%lld",&num);
        long long int arr[n];
        for(i=0;num>0;i++){
            if(num%10!=0){
                arr[i] = num%10 + 96;
                num = num/10;
            }
            else{
                arr[i] = (num/10)%100 + 96;
                num = num/1000;
            }
        }
        long long int j = i;
        for(i=j-1;i>=0;i--){
            printf("%c",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
