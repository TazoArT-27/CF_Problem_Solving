#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, count;
    bool flag = true;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> m;
        if(m == 1){
            flag = false;
        }
    }

    if(!flag){
        cout<<"HARD"<<endl;
    }
    else  cout<<"EASY"<<endl;

    return 0;
}