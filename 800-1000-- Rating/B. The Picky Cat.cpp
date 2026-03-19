#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; 
    if (!(cin >> n)) return;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    ll target = llabs(arr[0]);
    int smaller_abs = 0;
    
    for(int i = 1; i < n; i++) {
        if(llabs(arr[i]) < target) {
            smaller_abs++;
        }
    }
    int K = (n + 1) / 2;
    int left_slots = K - 1;
    int right_slots = n - K;

    if(smaller_abs <= max(left_slots, right_slots)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}