#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,length,flag;
    string str;
    char ch;
    cin>>t;
    while(t--){
        cin>>str;
        length = str.size();
        flag = 0;
        cin>>ch;
        for(int i=0; i<length; i++){
            if(str[i]==ch){
                int p = i+1;
                if(p%2!=0){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
