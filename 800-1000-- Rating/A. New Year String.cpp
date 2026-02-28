#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool found2026= (s.find("2026")!=string::npos);
    bool found2025=(s.find("2025")!=string::npos);
    if(found2026|| !found2025)
    {
        cout<<0<<"\n";
    }
    else{
        cout<<1<<"\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}