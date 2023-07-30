#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, result;
    cin>>str;

    stringstream ss(str);
    char operator_plus;
    int num;

    vector<int> numbers; 

    while (ss >> num) {
        numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end());  

    for (size_t i = 0; i < numbers.size(); i++) {
        result += to_string(numbers[i]);
        if (i != numbers.size() - 1) {
            result += "+";
        }
    }

    cout << result << endl;


    return 0;
}