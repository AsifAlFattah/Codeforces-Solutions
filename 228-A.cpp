#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<long long>li;
    for(int i=0;i<4;i++){
        long long temp;
        cin>>temp;
        li.push_back(temp);
    }
    li.sort();
    li.unique();
    int ans = 4-li.size();
    cout<<ans;
    return 0;
}
