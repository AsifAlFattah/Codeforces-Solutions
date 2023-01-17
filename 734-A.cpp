#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a=0, d=0;
    cin>>n;
    char str[n+1];
    for(int i=0;i<n;i++){
        cin>>str[i];
        if(str[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d) cout<<"Anton";
    else if(d>a) cout<<"Danik";
    else cout<<"Friendship";
    return 0;
}
