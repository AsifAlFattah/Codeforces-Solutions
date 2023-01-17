#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    string s,ans;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(),::tolower);
    int len = s.size();
    for(int i=0;i<len;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
            continue;
        else{
            ans+='.';
            ans+=s[i];
        }
    }
    cout<<ans;
    return 0;
}
