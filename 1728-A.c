#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int arr[n],i,max=0,max_position=0;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i]>=max){
                max=arr[i];
                max_position=i+1;
            }
        }
        printf("%d\n",max_position);
    }
    return 0;
}
