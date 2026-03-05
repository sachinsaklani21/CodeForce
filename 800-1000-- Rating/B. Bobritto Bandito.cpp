#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
    int n,m,l,r;
    cin>>n>>m>>l>>r;
    if(m<=r)
    {
        cout<<0<<" "<<m<<"\n";
        return;
    }
    else{
        cout<<r-m<<" "<<r<<"\n";
        return;
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