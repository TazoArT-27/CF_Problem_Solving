#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string str, answer;
    cin >> str;

    for(char c : str){
        if(c == str[0]){
            answer = std::toupper(c);
            answer+=str.substr(1);
        }
    }

    cout << answer <<endl;

    return 0;
}