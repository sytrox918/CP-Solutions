#include<bits/stdc++.h>
using namespace std;    
int main() {
    int n;
    cin >> n;
    while(n--) {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        if (k == 1){
            bool cond = true;
            for(int i = 0; i < n-1; i++){
                if (a[i] > a[i+1]){
                    cond = false;
                    break;
                }
            }            
            if (cond){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }        
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}        