#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, count = 0;
    cin>>n>>k;
    int myArr[n];
    for(int i=0; i<n; i++){
        cin>>myArr[i];
    }

    for(int i=0; i<n; i++){
        if(myArr[i]>0 && myArr[i]<=100){
            if(myArr[i] > myArr[k-1] || myArr[i] == myArr[k-1]){
                count++;
            }
        }
    }
    cout<<count<<endl;

    return 0;
}