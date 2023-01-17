#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r,div;
    cin>>t;
    while(t--){
        cin>>r;
        if(r>=1900) div=1;
        else if(r<=1899 && r>=1600) div=2;
        else if(r<=1599 && r>=1400) div=3;
        else div=4;
        cout<<"Division "<<div<<endl;
    }
    return 0;
}
