#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,p=0;
    vector<int>capacity;
    while(n--){
        cin>>a>>b;
        p = p+b-a;
        capacity.push_back(p);
    }
    sort(capacity.begin(),capacity.end());
    cout<<capacity[capacity.size()-1];
    return 0;
}
