#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    string s;
    int count1 = 0, count2 = 0;
    cin >> s;

    for(char c: s){
        int num = c;
        if(num>=97 && num<=122){
            count1++;
        }
        else if(num>=65 && num<=90){
            count2++;
        }
    }

    if(count1>count2){
        for(char& c: s){
            c = std::tolower(c);
        }
        cout<<s<<endl;
    }
    else if(count1<count2){
        for(char& c: s){
            c= std::toupper(c);
        }
        cout<<s<<endl;
    }
    else if(count1==count2){
        for(char& c: s){
            c= std::tolower(c);
        }
        cout<<s<<endl;
    }

    return 0;
}