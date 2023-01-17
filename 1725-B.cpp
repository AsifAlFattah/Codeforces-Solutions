#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,k;
	  cin>>n>>k;
	 vector<long long>v(n);
	 for(int i=0;i<n;i++){
	     cin>>v[i];
	 }

	 sort(v.begin(),v.end());
	 int cnt=0;
	 int i=0;
	 int j=n-1;
	 k++;
	 while(i<=j){
	     int temp=v[j];
	     int x= ceil((double)k/temp)-1;

	     i=i+x;
	     if(i<=j)
	     cnt++;
	     j--;
	 }
	 cout<<cnt;

	return 0;
}
