#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int flag=1;
        for(int i=1; i<=n; i++){
            int a;
            cin>>a;
            int temp = sqrt(a);
            if(temp*temp!=a){
                flag=0;
            }
        }
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
