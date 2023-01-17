//Wrong Answer
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<endl;
        char str[8][8];
        int r=0,b=0;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>str[i][j];
                if(str[i][j]=='R')
                    r++;
                else if(str[i][j]=='B')
                    b++;
            }
        }
        if(r>=b){
            if(r>b)
                cout<<"R"<<endl;
            else{
                if(str[7][7]=='R')
                    cout<<"R"<<endl;
                else
                    cout<<"B"<<endl;
            }
        }
        else{
            cout<<"B"<<endl;
        }
    }
    return 0;
}
