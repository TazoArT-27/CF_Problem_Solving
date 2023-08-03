#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, count = 0;
    cin >> a >> b ;

    if(1<=a<=b<=10){
        while(a<b || a==b){
            a = a*3;
            b = b*2;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}