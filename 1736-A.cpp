#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        int a1=0,a0=0,b1=0,b0=0,flag=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) a1++;
            else a0++;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]==1) b1++;
            else b0++;
            if(a[i]!=b[i])
                flag++;
        }
        int steps = abs(a1-b1);
        if(flag!=steps)
            steps++;

        cout<<steps<<endl;
    }
    return 0;
}
