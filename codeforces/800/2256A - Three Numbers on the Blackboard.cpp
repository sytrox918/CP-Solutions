#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        while (true) {
            vector<long long> v = {a, b, c};
            sort(v.begin(), v.end());

            a = v[0];
            b = v[1];
            c = v[2];

            if (c <= a + b)
                break;

            c = a + b;
        }

        cout << c - a << '\n';
    }

    return 0;
}