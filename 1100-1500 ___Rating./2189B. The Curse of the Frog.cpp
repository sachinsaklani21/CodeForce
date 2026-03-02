#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, x;
    cin >> n >> x;

    ll total_free = 0;
    ll best_cycle = LLONG_MIN;

    for (ll i = 0; i < n; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        total_free += a * (b - 1);
        best_cycle = max(best_cycle, a * b - c);
    }

    if (total_free >= x)
    {
        cout << 0 << "\n";
        return;
    }

    if (best_cycle <= 0)
    {
        cout << -1 << "\n";
        return;
    }

    ll remain = x - total_free;
    ll rolls = (remain + best_cycle - 1) / best_cycle;

    cout << rolls << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}