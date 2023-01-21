#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    bool flag = false;
    for(int i=0;i<str.size();i++){
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
            flag=true;
            break;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
