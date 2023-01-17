#include<iostream>
using namespace std;
int main()
{
    int n,p,q,room=0;
    cin>>n;
    while(n--){
        cin>>p>>q;
        room = (q-p>=2) ? room+1 : room+0;
    }
    cout<<room;
    return 0;
}
