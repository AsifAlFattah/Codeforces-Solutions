#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        char kbrd[27];
        cin>>kbrd;
        string s;
        cin>>s;
        if(s.size()==1)
            cout<<0<<endl;
        else{
            vector<int>v;
            for(int i=0;i<s.size();i++){
                for(int j=0;j<26;j++){
                    if(s[i]==kbrd[j]){
                        v.push_back(j);
                        break;
                    }
                }
            }
            int sum = 0;
            for(int i=0;i<v.size()-1;i++){
                sum = sum + abs(v[i]-v[i+1]);
            }
            cout<<sum<<endl;
        }

    }
    return 0;
}
