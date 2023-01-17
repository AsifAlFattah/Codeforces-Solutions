#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n<2050){
            cout<<-1<<endl;
            continue;
        }
        ll cnt=0;
        while(n>=2050){
            cnt++;
            ll x= 2050;
            while(x<=n){
                x*=10;
            }
            x = x/10;
            n = n-x;
        }
        if(n==0)
            cout<<cnt<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
