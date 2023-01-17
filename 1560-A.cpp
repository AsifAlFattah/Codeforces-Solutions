#include<iostream>
using namespace std;
int main()
{
    int arr[1000],i,j,n,x;
    cin>>n;
    for(i=0,j=1;i<1000;j++){
        if(j%3!=0 && j%10!=3){
            arr[i]=j;
            i++;
        }
    }
    while(n--){
        cin>>x;
        cout<<arr[x-1]<<endl;
    }
    return 0;
}
