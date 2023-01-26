#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1) cnt++;
        }
        if(cnt==1){
            cout<<v.size()<<endl;
        }
        else if(cnt%2==0){
            int ans = v.size() - cnt + (cnt/2);
            cout<<ans<<endl;
        }
        else{
            int ans = v.size() - cnt + (cnt/2 + 1);
            cout<<ans<<endl;
        }

    }
    return 0;
}
