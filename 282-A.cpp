#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    char str[4];
    cin>>n;
    while(n--){
        cin>>str;
        if(strcmp(str,"++X")==0 || strcmp(str,"X++")==0 || strcmp(str,"+X+")==0)
            x++;
        else
            x--;
    }
    cout<<x<<endl;
    x=0;
    return 0;
}
