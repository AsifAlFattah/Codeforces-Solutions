#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    list<int>li;
    cin>>n;
    cin>>p;
    while(p){
        int temp;
        cin>>temp;
        li.push_back(temp);
        p--;
    }
    cin>>q;
    while(q){
        int temp;
        cin>>temp;
        li.push_back(temp);
        q--;
    }
    li.sort();
    li.unique();
    int len = li.size();
    if(len==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
}
