#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,s1,s2;
        cin>>s;
        s1=s[0];
        s2=s[2];
        cout<<stoi(s1)+stoi(s2)<<endl;
    }
    return 0;
}
