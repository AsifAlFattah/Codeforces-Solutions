#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, r, b, d;
    cin>>t;
    while(t--){
        cin>>r>>b>>d;
        ll temp;
        if(r>b){
            temp = b*d + b;
            if(temp>=r){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            temp = r*d + r;
            if(temp>=b){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
