#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        list<int>li;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
            li.push_back(temp);
        }
        sort(v.begin(),v.end(),greater<int>());
        li.unique();
        int len = li.size();
        if(len==1){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                int temp = v[i+1];
                v[i+1] = v[n-1];
                v[n-1] = temp;
            }
            else
                break;
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
