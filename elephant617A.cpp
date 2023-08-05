#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    int y = x/5;
    if(x % 5 == 0){
        cout << y << endl;
    }
    else
        cout << y+1 << endl;

    return 0;
}