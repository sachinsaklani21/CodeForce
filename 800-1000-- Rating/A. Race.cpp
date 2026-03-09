#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
   int a,x,y;
   cin>>a>>x>>y;
   if(abs(a-x)>abs(x-y) || abs(a-y)>abs(x-y))
   {
    cout<<"YES\n";
   }
   else cout<<"NO\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}