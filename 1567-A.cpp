#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>str;
        char ch;
        for(int i=0; i<n; i++){
            cin>>ch;
            if(ch=='D')
                str.push_back('U');
            else if(ch=='U')
                str.push_back('D');
            else
                str.push_back(ch);
        }
        for(int i=0;i<n;i++){
            cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
