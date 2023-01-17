#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int num[n+1];
        char str[n+1];
        char str2[n+1];
        for(int i=0;i<n;i++)
            cin>>num[i];
        for(int i=0;i<n;i++){
            cin>>str[i];
            str2[i]='1';
        }
        for(int i=0;i<n;i++){
                if(str2[i]=='1'){
                    char temp=num[i];
                    for(int j=i;j<n;j++){
                        if(num[j]==temp){
                            str2[j]=str[i];
                        }
                    }
                }

            }


        int flag=1;
        for(int i=0;i<n;i++){
            if(str2[i]!=str[i]){
                flag=0;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

