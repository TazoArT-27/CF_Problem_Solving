#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    long long n, count = 0;
    cin >> n;
    string str = to_string(n);

    for(char c : str){
        if(c == '4' || c == '7'){
            count++;
        }
        else if(c != '4' || c != '7'){
            continue;
        } 
    } 

    if(count == 4 or count == 7){
        std::cout<<"YES"<<endl;
    }
    else std::cout<<"NO"<<endl;

    

    return 0;
}