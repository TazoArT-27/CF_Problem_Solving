#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, count = 0, min_capacity = 0, prev_count = 0, next_count = 0;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        prev_count = count;
        count -= a;
        count += b;
        next_count = count;
        if(next_count > prev_count && min_capacity < next_count){
            min_capacity = next_count;
        }
    }

    cout << min_capacity <<endl;
}