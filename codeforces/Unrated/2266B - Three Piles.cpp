#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        if (a > b) {
            cout << abs(a+c-b) << endl;
        }
        if (b >= a) {
            cout << max(abs(a-b), abs(a+c-b)) << endl;
        }
    }

    return 0;
}