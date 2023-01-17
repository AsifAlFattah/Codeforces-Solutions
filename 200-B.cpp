#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    double sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum = sum + (arr[i]/100.00);
    }
    double ans = (sum/n)*100;
    cout<<fixed<<setprecision(12)<<ans;
    return 0;
}
