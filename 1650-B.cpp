#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long l, r, a, ans1, ans2, ans;
    while(t--){
        cin>>l>>r>>a;
        long long temp = r%a;
        ans1 = (r/a) + (r%a);
        long long temp2 = r-(temp+1);
        ans2 = 0;
        if(temp2>=l && temp2<=r)
            ans2 = (temp2/a) + (temp2%a);
        ans = max(ans1,ans2);
        cout<<ans<<endl;

    }
    return 0;
}
