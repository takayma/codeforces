#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s = "";
        int n;
        string t;
        cin >> n >> t;
        int i = n - 1;
        while (i >= 0) {
            if (t[i] == '0') {
                s += char(int('a') + int(t[i - 2] - '0') * 10 + int(t[i - 1] - '0') - 1);
                i -= 3;
            } else {
                s += char(int('a') + int(t[i] - '0') - 1);
                i -= 1;
            }
        }
        cout << string(s.rbegin(), s.rend()) << endl;
    }
}