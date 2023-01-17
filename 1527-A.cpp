#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        ll temp = 1;
        while(temp<=n){
            temp = temp*2;
        }
        temp = temp/2;
        cout<<temp-1<<endl;
    }
    return 0;
}
