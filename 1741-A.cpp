#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        char a[51], b[51];
        cin>>a>>b;
        int as=0,am=0,al=0,ax=0,bs=0,bm=0,bl=0,bx=0;
        for(int i=0; a[i]!='\0';i++){
            if(a[i]=='X') ax++;
            else if(a[i]=='S') as++;
            else if(a[i]=='M') am++;
            else if(a[i]=='L') al++;
        }
        for(int i=0; b[i]!='\0';i++){
            if(b[i]=='X') bx++;
            else if(b[i]=='S') bs++;
            else if(b[i]=='M') bm++;
            else if(b[i]=='L') bl++;
        }
        if(as){
            if(bs){
                if(ax>bx) cout<<"<"<<endl;
                else if(ax<bx) cout<<">"<<endl;
                else cout<<"="<<endl;
            }
            else if(bm){
                cout<<"<"<<endl;
            }
            else{
                cout<<"<"<<endl;
            }
        }
        else if(am){
            if(bs){
                cout<<">"<<endl;
            }
            else if(bm){
                if(ax>bx) cout<<"<"<<endl;
                else if(ax<bx) cout<<">"<<endl;
                else cout<<"="<<endl;
            }
            else{
                cout<<"<"<<endl;
            }
        }
        else if(al){
            if(bs){
                cout<<">"<<endl;
            }
            else if(bm){
                cout<<">"<<endl;
            }
            else{
                if(ax>bx) cout<<">"<<endl;
                else if(ax<bx) cout<<"<"<<endl;
                else cout<<"="<<endl;
            }
        }
    }
    return 0;
}
