//Incomplete

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long int>v1;
        vector<long long int>v2;
        int n1=0, n0=0;
        for(int i=0;i<n;i++){
            cin>>x;
            v1.push_back(x);
            if(n==1) n1++;
            else n0++;
        }
        for(int i=0;i<n;i++){
            cin>>x;
            v2.push_back(x);
        }
        long long int sum = v2[0];
        if(n<2){
            cout<<sum<<endl;
            continue;
        }
        if(n1==0 || n0==0){
            for(int i=1; i<v2.size(); i++){
                sum+=v2[i];
            }
            cout<<sum<<endl;
            continue;
        }
        if()
    }
    return 0;
}
