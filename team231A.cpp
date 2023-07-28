#include <iostream>
using namespace std;

int main(){
    int n, count = 0;
    cin>>n;
    if(n>=1 && n<=1000){
        for(int i=0; i<n; i++){
        int x, y, z;
        cin>>x>>y>>z;
        if(x+y+z >= 2)
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}