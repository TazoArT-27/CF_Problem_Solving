#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h, k, count = 0;
    cin >> n >> h;

    for(int i = 0; i < n; i++){
        cin >> k;
        if(k > h){
            count+=2;
        }
        else if(k<=h){
            count+=1;
        }
    }

    cout << count << endl;

    return 0;
}