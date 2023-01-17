/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.size()<5){
        cout<<"NO";
        return 0;
    }
    list<char> li;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='h' || s[i]=='e' || s[i]=='l' || s[i]=='o'){
            li.push_back(s[i]);
        }
    }
    //li.unique();
    bool flag;
    char temp = li.begin();
    char temp2;

    for(auto it:li){
        cout<<it;
    }
    return 0;
}
*/

#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    std::string hello = "hello";
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == hello[j]) {
            j++;
        }
        if (j == hello.size()) {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }

    std::cout << "NO" << std::endl;
    return 0;
}

