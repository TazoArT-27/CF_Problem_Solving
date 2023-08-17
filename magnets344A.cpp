#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, count = 0;
    cin >> n;
    char k, array[n];

    for(int i = 0; i < n; i++){
        cin >> m;
        k = static_cast<char>(m);
        array[i] = k;
        if(array[i] != array[i-1]){
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}