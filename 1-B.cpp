#include<bits/stdc++.h>
using namespace std;
vector<char> coloumn(int col)
{
    vector<char>clm;
    for(int i=26;col>0; ){
        char temp;
        if(col%26==0)
            temp = 'Z';
        else
            temp = '@' + (col%26);
        clm.push_back(temp);
        if(col/26==0 && col%26==0)
            break;
        if(col%26!=0) col = col/26;
        else col = col/26 - 1;
    }
    //string clmn = clm;
    return clm;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        string r="";
        string c="";
        if(a[0]=='R'){
            for(int i=0; ;i++){
                if(a[i]=='R')
                    continue;
                if(a[i]=='C')
                    break;
                r = r+a[i];
            }
            for(int i=a.size()-1; ;i--){
                if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
                    c = c+a[i];
                else
                    break;
            }
            reverse(c.begin(), c.end());
            int row = stoi(r);
            int col = stoi(c);
            vector<char>temp = coloumn(col);

            for(int i=temp.size()-1;i>=0;i--){
                cout<<temp[i];
            }
            cout<<row<<endl;
        }
        else{
            for(int i=a.size()-1; ;i--){
                if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
                    r = r+a[i];
                else
                    break;
            }
            int clm_num=0;
            for(int i=0; ;i++){
                if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
                    break;
                else{
                    c+=a[i];
                }
            }
            for(int i=c.size()-1,j=1;i>=0;i--,j++){
                if(j==1){
                    if(c[i]=='A') clm_num+=1;
                    else if(c[i]=='B') clm_num+=2;
                    else if(c[i]=='C') clm_num+=3;
                    else if(c[i]=='D') clm_num+=4;
                    else if(c[i]=='E') clm_num+=5;
                    else if(c[i]=='F') clm_num+=6;
                    else if(c[i]=='G') clm_num+=7;
                    else if(c[i]=='H') clm_num+=8;
                    else if(c[i]=='I') clm_num+=9;
                    else if(c[i]=='J') clm_num+=10;
                    else if(c[i]=='K') clm_num+=11;
                    else if(c[i]=='L') clm_num+=12;
                    else if(c[i]=='M') clm_num+=13;
                    else if(c[i]=='N') clm_num+=14;
                    else if(c[i]=='O') clm_num+=15;
                    else if(c[i]=='P') clm_num+=16;
                    else if(c[i]=='Q') clm_num+=17;
                    else if(c[i]=='R') clm_num+=18;
                    else if(c[i]=='S') clm_num+=19;
                    else if(c[i]=='T') clm_num+=20;
                    else if(c[i]=='U') clm_num+=21;
                    else if(c[i]=='V') clm_num+=22;
                    else if(c[i]=='W') clm_num+=23;
                    else if(c[i]=='X') clm_num+=24;
                    else if(c[i]=='Y') clm_num+=25;
                    else{
                        if(c.size()==1) clm_num+=26;
                        else clm_num+=0;
                    }
                }
                else{
                    if(c[i]=='A') clm_num+=(1*j);
                    else if(c[i]=='B') clm_num+=(2*j);
                    else if(c[i]=='C') clm_num+=(3*j);
                    else if(c[i]=='D') clm_num+=(4*j);
                    else if(c[i]=='E') clm_num+=(5*j);
                    else if(c[i]=='F') clm_num+=(6*j);
                    else if(c[i]=='G') clm_num+=(7*j);
                    else if(c[i]=='H') clm_num+=(8*j);
                    else if(c[i]=='I') clm_num+=(9*j);
                    else if(c[i]=='J') clm_num+=(10*j);
                    else if(c[i]=='K') clm_num+=(11*j);
                    else if(c[i]=='L') clm_num+=(12*j);
                    else if(c[i]=='M') clm_num+=(13*j);
                    else if(c[i]=='N') clm_num+=(14*j);
                    else if(c[i]=='O') clm_num+=(15*j);
                    else if(c[i]=='P') clm_num+=(16*j);
                    else if(c[i]=='Q') clm_num+=(17*j);
                    else if(c[i]=='R') clm_num+=(18*j);
                    else if(c[i]=='S') clm_num+=(19*j);
                    else if(c[i]=='T') clm_num+=(20*j);
                    else if(c[i]=='U') clm_num+=(21*j);
                    else if(c[i]=='V') clm_num+=(22*j);
                    else if(c[i]=='W') clm_num+=(23*j);
                    else if(c[i]=='X') clm_num+=(24*j);
                    else if(c[i]=='Y') clm_num+=(25*j);
                    else if(c[i]=='Z') clm_num+=(26*j);
                }
            }
            reverse(r.begin(), r.end());
            cout<<"R"<<r<<"C"<<clm_num;

        }

    }
    return 0;
}
