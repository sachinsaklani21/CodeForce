#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
   string s;
   cin>>s;
   int n=s.length();
   for(int i=0;i<n-1;i++)
   {
    if(s[i]==s[i+1]){cout<<s[i]<<s[i+1]<<'\n';return;}
   }
   for (int i=0;i<n-2;i++)
   {
    if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2])
    {
        cout<<s[i]<<s[i+1]<<s[i+2]<<'\n';
        return;
    }
   }
   cout<<-1<<'\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}