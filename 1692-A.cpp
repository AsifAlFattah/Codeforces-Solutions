#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin>>n;
    while(n--){
        int temp=0;
        cin>>a>>b>>c>>d;
        if(a<b)
            temp++;
        if(a<c)
            temp++;
        if(a<d)
            temp++;
        cout<<temp<<endl;
    }
    return 0;
}
