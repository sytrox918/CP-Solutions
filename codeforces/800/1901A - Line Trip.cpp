#include<bits/stdc++.h>
using namespace std;    
int main() {
    int n;
    cin >> n;
    while(n--) {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        a.push_back(0);
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        a.push_back(k);
        int vol = 0;
        for(int i = 0; i < n; i++) {
            vol = max(vol, a[i+1] - a[i]);
        }
        vol = max(vol, 2*(a[n+1] - a[n]));
        cout << vol << endl;
    }
    return 0;
}