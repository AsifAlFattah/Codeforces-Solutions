#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int cnt=0;
        for(int i=0;i<n;i++){
            if(v[0]==v[i])
                cnt++;
            else
                break;
        }
        cout<<n-cnt<<endl;
    }
    return 0;
}
