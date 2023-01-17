#include<iostream>
using namespace std;
int main()
{
    long int n,k,i;
    cin>>n>>k;
    for(i=1;i<=k;i++){
        n = (n%10==0) ? n/10 : n-1;
    }
    cout<<n;
    return 0;
}
