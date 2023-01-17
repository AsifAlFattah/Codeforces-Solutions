#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t--)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='B' && s[i+1] =='G' && i+1 != s.size())
            {
                swap(s[i],s[i+1]);
                i+=1;
            }
        }
    }
    cout<<s;
    return 0;
}
