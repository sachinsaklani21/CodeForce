#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
   string s;
   cin>>s;
   if(s[0]>s[2]){
    cout<<s[0]<<'>'<<s[2]<<'\n';
   }
   else if(s[0]<s[2])
   {
    cout<<s[0]<<'<'<<s[2]<<'\n';
   }
   else cout<<s[0]<<'='<<s[2]<<'\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}