#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        if(i%2!=0){
            for(j=1;j<=m;j++){
                cout<<"#";
            }
        }
        else if(i%4==0){
            for(j=1;j<=m;j++){
                if(j==1)
                    cout<<"#";
                else
                    cout<<".";
            }
        }
        else{
            for(j=1;j<=m;j++){
                if(j==m)
                    cout<<"#";
                else
                    cout<<".";
            }
        }
        cout<<endl;
    }
    return 0;
}
