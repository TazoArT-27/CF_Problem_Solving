#include <bits/stdc++.h>
using namespace std;

int main() {
    int year, count = 0;
    cin >> year;

    while (true) {
        year += 1;
        string str = to_string(year);

        bool distinct = true;
        for (int i = 0; i < str.length(); i++) {
            for (int j = i + 1; j < str.length(); j++) {
                if (str[i] == str[j]) {
                    distinct = false;
                    break;
                }
            }
            if (!distinct) {
                break;
            }
        }

        if (distinct) {
            cout << year << endl;
            break;
        }
    }

    return 0;
}
