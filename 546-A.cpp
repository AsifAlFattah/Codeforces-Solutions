#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,w,n,i,p=0;
    cin>>k>>w>>n;
    if(n!=0){
        for(i=1;i<=n;i++){
            p = p + i*k;
        }
    }
    if(p>w)
        cout<<p-w;
    else
        cout<<0;
    return 0;
}
