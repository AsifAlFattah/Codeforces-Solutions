#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,i,j,arr[4];
    cin>>y;
    for(i=1; ;i++){
        y = y+1;
        int temp = y;
        for(j=0;j<4;j++){
            arr[j] = temp%10;
            temp = temp/10;
        }
        if(arr[0]!=arr[1] && arr[0]!=arr[2] && arr[0]!=arr[3] && arr[1]!=arr[2] && arr[1]!=arr[3] && arr[2]!=arr[3]){
            cout<<y;
            break;
        }
    }
    return 0;
}
