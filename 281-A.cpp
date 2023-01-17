#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    char ch = toupper(str[0]);
    cout<<ch;
    for(int i=1;i<str.size();i++){
        cout<<str[i];
    }
    return 0;
}
