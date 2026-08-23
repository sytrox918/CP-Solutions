#include <bits/stdc++.h>
using namespace std;

int countDistinct(const vector<int>& arr) {
    unordered_set<int> unique_elements(arr.begin(), arr.end());
    return unique_elements.size();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count = countDistinct(a);

        if (count == 1) {
            cout << "Yes" << endl;
        }
        else if (count == 2) {
            int a1, a2;

            for (int i = 0; i < n - 1; i++) {
                if (a[i] != a[i + 1]) {
                    a1 = a[i];
                    a2 = a[i + 1];
                    break;
                }
            }

            int c1 = 0;
            int c2 = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] == a1) {
                    c1++;
                }
                else if (a[i] == a2) {
                    c2++;
                }
            }

            if (c1 == c2 || c1 == c2 + 1 || c2 == c1 + 1) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}