#include <bits/stdc++.h>
using namespace std;

int main(){
    int k , n, w, sum , total = 0;
    cin >> k >> n >> w ;

    for(int i = 1; i <= w; i++){
        sum = k*i;
        total += sum;
    }

    if(total <= n){
            cout << 0 << endl;
        }
        else cout << total-n <<endl;
    
    

    return 0;
}