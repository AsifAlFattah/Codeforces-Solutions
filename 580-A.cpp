#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=1;
    cin>>n;
    vector<int>v;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        if(arr[i+1]>=arr[i]){
            cnt++;
        }
        else{
            v.push_back(cnt);
            cnt=1;
        }
    }
    v.push_back(cnt);
    auto max_it = max_element(v.begin(), v.end());
    cout<<*max_it;
    return 0;
}
