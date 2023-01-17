#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, i, cnt;
    cin>>n>>a>>b;
    cnt = min(n-a,b+1);
    cout<<cnt;
    return 0;
}
