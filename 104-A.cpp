#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp = n-10;
    if(temp==10) cout<<15;
    else if(temp>0 && temp<12) cout<<4;
    else cout<<0;
    return 0;
}
