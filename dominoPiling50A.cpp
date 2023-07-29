#include <iostream>
using namespace std;

int main(){
    int m, n, count = 0, value, ans;
    cin>>m>>n;
    
    if(1<=m<=n<=16){
        value = m*n;
        ans = value/2 ;
        cout<<ans<<endl; 
    }

    return 0;
}