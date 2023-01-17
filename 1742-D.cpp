//INCOMPLETE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        list<int>li1;
        list<int>li2;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            li1.push_back(x);
            li2.push_back(x);
        }
        li2.sort();
        li2.unique();


    }
    return 0;
}
