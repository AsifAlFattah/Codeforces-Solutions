#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum=0;
    cin>>n;
    while(n--){
        cin>>x;
        sum = sum + x;
    }
    if(sum%4==0)
        cout<<sum/4;
    else
        cout<<(sum/4)+1;
    return 0;
}
