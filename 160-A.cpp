#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<n;i++){
        int sum1=0, sum2=0;
        for(int x=0;x<=i;x++){
            sum1+=v[x];
        }
        for(int y=n-1;y>i;y--){
            sum2+=v[y];
        }
        if(sum1>sum2){
            cout<<i+1;
            return 0;
        }
    }
    return 0;
}
