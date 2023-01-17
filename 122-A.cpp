#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag=false;
    string str = to_string(n);
    for(int i=0;i<str.size();i++){
        if(str[i]!='4' && str[i]!='7'){
            flag = true;
            break;
        }
    }
    if(flag){
        if(n%4==0 || n%7==0 || n%47==0 || n%74==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else
        cout<<"YES";
    return 0;
}
