#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,maximum=0,i,ans=0;
    cin>>n;
    vector<int>v;
    while(n--){
        cin>>x;
        v.push_back(x);
        if(x>maximum)
            maximum = x;
    }
    for(i=0;i<v.size();i++){
        ans = ans + (maximum-v[i]);
    }
    cout<<ans;
    return 0;
}
