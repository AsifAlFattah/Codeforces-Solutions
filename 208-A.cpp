#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,ans="";
    cin>>str;
    int len = str.size();
    for(int i=0;i<len; ){
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            if(ans.size()!=0) ans+=" ";
            i+=3;
        }
        else{
            ans+=str[i];
            i++;
        }
    }
 /*   if(str[len-3]=='W' && str[len-2]=='U' && str[len-1]=='B'){

    }
    else{
        ans = ans + str[len-3] + str[len-2] + str[len-1];
    }*/
    cout<<ans;
    return 0;
}
