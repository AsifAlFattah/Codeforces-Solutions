#include <stdio.h>
#include <string.h>
#include<math.h>
int compare(const void *x_void,const void *y_void)
{
    int x = *(int *)x_void;
    int y = *(int *)y_void;
    return y-x;
}
int main()
{
    long long int n, count=0,i,j;
    char str[200001];
    scanf("%lld",&n);
    while(n--){
        scanf(" %200000[^\n]", str);
        int arr[strlen(str)], arr2[strlen(str)],temp;
        for(i=0;str[i]!='\0';i++){
            arr[i] = (int) str[i] - 96;
            temp = arr[0];
        }
        for(j=0,i=0;j<strlen(str);j++){
            if(arr[j]<=temp){
                arr2[i]=arr[j];
                i++;
            }
        }
        qsort(arr2,strlen(str)-1,sizeof(int),compare);
        int length = (sizeof(arr2)/sizeof(arr2[0]))-1;
        for(i=0,j=1;j<length;i++,j++){
            count = count + abs(arr2[i]-arr2[j]);
        }
        printf("%lld %d",count,length);
    }
    return 0;
}
