#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long x1,x2,x3,y1,y2,y3;
    while(t--){
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        if(x1==x2 || x1==x3 || x2==x3){
            if(y1==y2 || y1==y3 || y2==y3){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
