#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, arr[100];
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> k;
        arr[k] = i;
    }

    for(int i = 1; i <= n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}