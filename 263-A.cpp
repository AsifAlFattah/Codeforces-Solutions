#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5],i,j,s=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                int x = abs(3-(i+1));
                int y = abs(3-(j+1));
                s=x+y;
            }

        }
    }
    cout<<s;
    return 0;
}
