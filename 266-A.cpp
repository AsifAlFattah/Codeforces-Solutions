#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char ch;
    cin>>n;
    list<char>str;
    for(int i=0; i<n; i++){
        cin>>ch;
        str.push_back(ch);
    }
    str.unique();
    int ans = n - (str.size());
    cout<<ans;
    return 0;
}
