#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,x,i,sum=0;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(i=1;i<=n;i++){
            cin>>x;
            sum = sum + x;
        }
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}
