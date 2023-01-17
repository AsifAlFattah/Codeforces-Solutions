#include<iostream>
using namespace std;
int compare(const void *x_void,const void *y_void)
{
    int x = *(int *)x_void;
    int y = *(int *)y_void;
    return y-x;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr1[n],arr2[n],i,temp;
        for(i=0;i<n;i++){
            cin>>arr1[i];
            arr2[i]=arr1[i];
        }
        qsort(arr2,n,sizeof(int),compare);
        temp = (arr2[0]==arr2[1]) ? arr2[n-1] : arr2[0];
        for(i=0;i<n;i++){
            if(arr1[i]==temp){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
