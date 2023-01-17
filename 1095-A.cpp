#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>str;
    int n,i=0,j;
    char ch;
    cin>>n;
    while(n--){
        cin>>ch;
        str.push_back(ch);
    }
    for(j=0; ;j++){
        i = i + j;
        if(i>=str.size()) break;
        cout<<str[i];
    }

    return 0;
}
