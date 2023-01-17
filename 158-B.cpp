#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<int>g4;
    vector<int>g3;
    vector<int>g2;
    vector<int>g1;
    while(n--){
        cin>>x;
        if(x==4)
            g4.push_back(x);
        else if(x==3)
            g3.push_back(x);
        else if(x==2)
            g2.push_back(x);
        else
            g1.push_back(x);
    }
    int g4size = g4.size();
    int g3size = g3.size();
    int g2size = g2.size();
    int g1size = g1.size();
    int ans = g4size;
    if(g3size==g1size){
        ans = ans + g3size;
        g3size=0;
        g1size=0;
    }
    else if(g3size>g1size){
        ans = ans + g1size;
        g3size=g3size-g1size;
        g1size=0;
    }
    else{
        ans = ans + g3size;
        g1size=g1size-g3size;
        g3size=0;
    }
    if(g1size==0 && g3size==0){
        int temp = ((g2size*2)%4==0) ? ((g2size*2)/4) : (((g2size*2)/4)+1);
        ans = ans + temp;
    }
    else if(g1size==0 && g3size!=0){
        int temp = ((g2size*2)%4==0) ? ((g2size*2)/4) : (((g2size*2)/4)+1);
        ans = ans + temp + g3size;
    }
    else if(g3size==0 && g1size!=0){
        int Temp = g2size*2 + g1size;
        int temp = ((Temp)%4==0) ? (Temp/4) : ((Temp/4)+1);
        ans = ans + temp ;
    }
    cout<<ans;
    return 0;
}
