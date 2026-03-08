#include <bits/stdc++.h>
using ll = long long;
using namespace std;

bool is_prime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    ll x, k;
    cin >> x >> k;

    if (x > 1 && k > 1) {
        cout << "NO\n";
    } 
    else if (k == 1) {
        if (is_prime(x)) cout << "YES\n";
        else cout << "NO\n";
    } 
    else {
        if (k == 2) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}