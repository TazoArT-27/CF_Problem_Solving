#include<bits/stdc++.h>
using namespace std;    

int main(){
    string str;
    cin >> str;
    std::set<char> distinct;
    for (char c : str) {
        distinct.insert(c);
    }
    int count = distinct.size();

    if(count%2  == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else cout<<"IGNORE HIM!"<<endl;

    return 0;

}