#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        list<int>li;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            li.push_back(x);
        }
        int s1 = li.size();
        li.sort();
        li.unique();
        int s2 = li.size();
        if(s1==s2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
