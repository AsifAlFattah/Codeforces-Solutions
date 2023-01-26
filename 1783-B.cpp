#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans[n][n];
        int sml=1, lrg=n*n, cnt=1;
        for(int i=1; i<=n; i++){
            if(i%2!=0){
                for(int j=0; j<n; j++){
                    if(cnt%2!=0){
                        ans[i-1][j] = sml;
                        sml++;
                        cnt++;
                    }
                    else{
                        ans[i-1][j] = lrg;
                        lrg--;
                        cnt++;
                    }
                }
            }
            else{
                for(int j=n-1; j>=0; j--){
                    if(cnt%2!=0){
                        ans[i-1][j] = sml;
                        sml++;
                        cnt++;
                    }
                    else{
                        ans[i-1][j] = lrg;
                        lrg--;
                        cnt++;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
