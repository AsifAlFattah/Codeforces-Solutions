#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr1[n];
        vector<int>arr2(n);
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        arr2[0]=arr1[0];
        for(int i=0, x=1; i<n-1; i++,x++){
            for(int j=0; ;j++){
                int temp = abs(j-arr2[i]);
                if(temp==arr1[x]){
                    arr2.push_back(j);
                    break;
                }
                if(temp<arr1[x])
                    break;
            }
        }
        for(int i=0; i<arr2.size(); i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
