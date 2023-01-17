#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, a, b, temp;
    cin>>t;
    while(t--){
        cin>>a>>b;
        temp = abs(a-b);
        if(a>b){
            if(temp%2==0) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else if(a<b){
            if(temp%2!=0) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else
            cout<<0<<endl;
    }
    return 0;
}
