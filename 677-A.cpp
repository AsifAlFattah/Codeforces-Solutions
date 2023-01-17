#include<iostream>
using namespace std;
int main()
{
    int n,h,a,w=0;
    cin>>n>>h;
    while(n--){
        cin>>a;
        if(a<=h)
            w++;
        else
            w+=2;
    }
    cout<<w;
    return 0;
}
