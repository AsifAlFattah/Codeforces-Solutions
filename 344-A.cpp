#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    list<int>li;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        li.push_back(temp);
    }
    li.unique();
    cout<<li.size();
    return 0;
}
