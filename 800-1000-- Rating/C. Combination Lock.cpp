    #include <iostream>
    #include <vector>
     
    using namespace std;
     
    void solve() {
        int n;
        cin >> n;
     
        if (n % 2 == 0) {
            cout << -1 << endl;
        } else {
            for (int i = n; i >= 1; i--) {
                cout << i << (i == 1 ? "" : " ");
            }
            cout << endl;
        }
    }
     
    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
     
        int t;
        cin >> t;
        while (t--) {
            solve();
        }
        return 0;
    }