#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
    int ans;
    cin >> str1 >> str2;

    for (char& c : str1) {
        c = std::tolower(c);
    }
    for (char& c : str2) {
        c = std::tolower(c);
    }

    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] < str2[i]) {
            ans=-1;
            break;
        } else if (str1[i] > str2[i]) {
            ans=1;
            break;
        } else ans=0;
    }
    cout<<ans<<endl;

    return 0;
}