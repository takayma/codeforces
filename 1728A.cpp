#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> cnt (n);
        for (int i = 0; i < n; ++i) cin >> cnt[i];

        int a = 0, i = 0, j = 1;

        while (a != n - 1) {
            int minn = min(cnt[i], cnt[j]);
            cnt[i] -= minn;
            cnt[j] -= minn;

            a += int(cnt[i] == cnt[j]) + 1;
            
            while ((cnt[i] == 0 || i == j) && i < n - 1) ++i;

            while ((cnt[j] == 0 || i == j) && j < n - 1) ++j;

        }
        if (cnt[i] == 0) {
            cout << j + 1 << endl;
        } else {
            cout << i + 1 << endl;
        }
    }
}