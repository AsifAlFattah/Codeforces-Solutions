#include<iostream>
using namespace std;
int main()
{
    long long int i, num;
    cin>>num;
    int flag=0;
    while(num!=0){
        if(num%10==4 || num%10==7){
            flag++;
        }
        num = num/10;
    }
    if(flag==4 || flag==7)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
