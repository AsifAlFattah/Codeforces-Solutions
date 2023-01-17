//Time Limit Exceed
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i,j;
    cin>>t;
    long long n,q;
    while(t--){
        cin>>n>>q;
        vector<long long>num(n);
        for(i=0;i<n;i++){
            cin>>num[i];
        }
        for(i=0;i<q;i++){
            cin>>a>>b;
            long long sum=0;
            long long *s = &sum;
            if(a==0){
                long long *p;
                for(j=0;j<n;j++){
                    p=&num[j];
                    if(*p%2==0){
                        *p+=b;
                    }
                    *s+=*p;
                }
                cout<<*s<<endl;
            }
            else{
                long long *p;
                for(j=0;j<n;j++){
                    p=&num[j];
                    if(*p%2!=0){
                        *p+=b;
                    }
                    *s+=*p;
                }
                cout<<*s<<endl;
            }

        }
    }
    return 0;
}
