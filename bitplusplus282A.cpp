#include <iostream>
using namespace std;

int main(){
    int n, count = 0;
    cin>>n;
    string str;

    if(1<=n<=150){
        for(int i=0; i<n; i++){
        cin>>str;
        if(str == "X++" || str == "++X"){
            count++;
        } 
        else
            count--;
        }
    }
    cout<<count<<endl;
    return 0;
}