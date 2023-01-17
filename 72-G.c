#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    arr[1] = 1;
    arr[2] = 1;
    for(i=3;i<=n;i++)
    {
        arr[i] = arr[i-2] + arr[i-1];
        arr[i-2] = arr[i-1];
        arr[i-1] = arr[i];
    }
    printf("%d",arr[n]);

    return 0;
}
