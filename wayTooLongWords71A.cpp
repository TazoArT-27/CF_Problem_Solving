#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin>>n;
    if(n>=1 && n<=100){
        for(int i=0; i<n; i++){
        string input;
        cin >> input;
        int length = input.length();
        int middle_length = input.substr(1, length-2).length();
        if(length>10){
            cout<<input[0]<<middle_length<<input[length-1]<<endl;
        }
        else 
            cout<<input<<endl;
        }
    }


    return 0;
}
