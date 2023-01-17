#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n, cnt;
        cin>>n;
        cnt = (int)sqrt(n) + (int)cbrt(n) - (int)sqrt(cbrt(n));
        cout<<cnt<<endl;
    }
    return 0;
}
