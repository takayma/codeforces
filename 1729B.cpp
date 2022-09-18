#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            for (int i = 2; i < n; i += 2) {
                cout << i << ' ' << i - 1 << ' ';
            }
        } else {
            cout << 1 << ' ';
            for (int i = 3; i < n; i += 2) {
                cout << i << ' ' << i - 1 << ' ';
            }
        }
        cout << n - 1 << ' ' << n << endl;
    }
}