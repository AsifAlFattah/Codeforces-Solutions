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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt=0;
        for(int i=0,j=v.size()-1;i<v.size()-1; ){
            if(v[i]>v[i+1]){
                v[j] = v[i+1]+v[j];
                v.erase(v.begin()+i+1);
                cnt++;
            }
            else
                i++;

        }
        cout<<cnt<<endl;

    }
    return 0;
}
