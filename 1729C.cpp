#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool f(vector<int> x, vector<int> y) {
    return x[0] < y[0];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int first = int(s[0]);
        int last = int(s[size(s) - 1]);
    
        int k = 2;
        vector<vector<int>> arr;

        for (int i = 1; i < size(s) - 1; ++i) {
            int x = int(s[i]);
            if (x >= min(first, last) && x <= max(first, last)) {
                ++k;
                arr.push_back(vector<int> {abs(first - x), i});
            }
        }

        sort(arr.begin(), arr.end(), f);
        cout << abs(last - first) << ' ' << k << endl; 
        cout << 1 << ' ';
        for (auto x : arr) cout << x[1] + 1 << ' ';
        cout << size(s) << endl;
    }
}