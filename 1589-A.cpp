#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    ll u,v,x,y;
    cin>>t;
    while(t--){
        cin>>u>>v;
        x = u*u;
        y = v*v;
        cout<<x<<" "<<-y<<endl;
    }
    return 0;
}
