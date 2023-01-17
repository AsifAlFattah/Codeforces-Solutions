#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,flag=0,j;
        cin>>n;
        char ch;
        list<char>li;
        for(int i=0;i<n;i++){
            cin>>ch;
            li.push_back(ch);
        }
        li.unique();
        int ln = li.size();
        while(ln!=0){
            char temp = li.front();
            li.pop_front();
            ln--;
            for(auto it : li){
                if(it==temp){
                    flag=1;
                    break;
                }
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
