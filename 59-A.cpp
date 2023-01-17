#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int upper=0,lower=0;
    for(int i=0;i<str.size();i++){
        if(islower(str[i]))
            lower++;
        else
            upper++;
    }
    if(lower>=upper){
        for(int i=0;i<str.size();i++){
            str[i] = tolower(str[i]);
        }
    }
    else{
        for(int i=0;i<str.size();i++){
            str[i] = toupper(str[i]);
        }
    }
    cout<<str;
    return 0;
}
