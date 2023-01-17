#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,sum=0,i;
        scanf("%d %d",&n,&m);
        int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
            sum = sum + arr[i];
        }
        if(sum>m)
            printf("%d\n",sum-m);
        else
            printf("0\n");
    }
    return 0;
}
