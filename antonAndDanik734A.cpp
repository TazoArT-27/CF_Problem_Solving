#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, countA = 0, countD = 0;
    cin >> n;

    string s;
    cin >> s;

    for(char c: s){
        if(c == 'A'){
            countA++;
        }
        else if(c == 'D'){
            countD++;
        }
    }

    if(countA == countD){
        cout << "Friendship" <<endl;
    }
    else if(countA > countD){
        cout << "Anton" <<endl;
    }
    else if(countA < countD){
        cout << "Danik" <<endl;
    }

    return 0;
}