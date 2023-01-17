#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long n1 = (n%2!=0) ? (n/2)+1 : n/2;
    long long n2 = n/2;
    long long sum = (n2*(n2+1))-(n1*n1);
    cout<<sum;
    return 0;
}
