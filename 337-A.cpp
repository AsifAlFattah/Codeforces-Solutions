#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    vector<int>arr;
    for(i=0;i<m;i++){
        cin>>j;
        arr.push_back(j);
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    int diff = arr[0]-arr[n-1];
    for(i=1;(i+n-1)<arr.size();i++){
        int temp = arr[i]-arr[i+n-1];
        if(temp<diff){
            diff=temp;
        }
    }
    printf("%d",diff);
    return 0;
}
