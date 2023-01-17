#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1)
            flag = 1;
    }
    if(flag)
        cout<<"HARD";
    else
        cout<<"EASY";
    return 0;
}
