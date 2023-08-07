#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    string str;

    for(int i = 0; i < k; i++){
        str = to_string(n);
        char last = str.back();
        if(last == '0'){
            n = n/10;
        }
        else{
            n-=1;
        }
    }
    cout<<n<<endl;
    return 0;
}