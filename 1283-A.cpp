#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t, h, m;
    cin>>t;
    while(t--){
        cin>>h>>m;
        int temp = 1440 - (h*60 + m);
        cout<<temp<<endl;
    }
    return 0;
}
