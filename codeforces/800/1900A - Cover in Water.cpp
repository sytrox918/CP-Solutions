#include<bits/stdc++.h>
using namespace std;    
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<char> a;
        for(int i = 0; i < n; i++) {
            char x;
            cin >> x;
            a.push_back(x);
        }
        bool cond = false;
        for(int i = 0; i < n-2; i++) {
            if (a[i] == a[(i+1)] && a[i] == a[(i+2)] && a[i] == '.'){
                cond = true;
                break;
            }
        }
        if (cond){
            cout << 2 << endl;
        }
        else{
            int ans{0};
            for(int i = 0; i < n; i++) {
                if (a[i] == '.'){
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}