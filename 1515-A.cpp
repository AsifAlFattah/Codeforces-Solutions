#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,y,sum=0;
        cin>>n>>x;
        vector<int>v;
        for(int i=0; i<n; i++){
            cin>>y;
            v.push_back(y);
            sum+=y;
        }
        if(sum==x){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            sum = 0;
            int cnt=0;
            while(cnt!=n){
                int temp = v[0];
                v.erase(v.begin());
                if(sum+temp==x){
                    v.push_back(temp);
                }
                else{
                    cout<<temp<<" ";
                    cnt++;
                    sum+=temp;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
