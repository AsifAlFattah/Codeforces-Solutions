#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,ans=0;
    cin>>n;
    int arr[n-1];
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }
    cin>>a>>b;
    for(int i=a-1;i<b-1;i++){
        ans+=arr[i];
    }
    cout<<ans;
    return 0;
}
