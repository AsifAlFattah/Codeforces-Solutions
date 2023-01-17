#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,temp,mx;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>b){
            temp = a * (b*2);
            mx = max(a,b*2);
        }
        else{
            temp = b * (a*2);
            mx = max(b,a*2);
        }

        for(int i=2; ;i++){
            int sqr = i*i;
            if(sqr>=temp && i>=mx){
                cout<<i*i<<endl;
                break;
            }
        }
    }
    return 0;
}
