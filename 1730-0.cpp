#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, c, ans=0, x;
    cin>>t;
    while(t--){
        cin>>n>>c;
        vector<int>arr;
        for(int i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        for(int i=0;i<arr.size();i++){
            int cnt=1;
            for(int j=i+1; j<arr.size(); j++){
                if(arr[i]==arr[j]){
                    arr.erase(arr.begin()+(j));
                    j--;
                    cnt++;
                }
            }
            if(cnt<c)
                ans=ans+cnt;
            else
                ans=ans+c;
        }
        cout<<ans<<endl;
        ans=0;
    }
    return 0;
}
