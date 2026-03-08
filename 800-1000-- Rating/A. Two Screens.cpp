#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
   string s,t;
   cin>>s>>t;
   int n=s.length();
   int m=t.length();
   int loop=min(n,m);
   int count=0;
   for (int i=0;i<loop;i++)
   {
    if(s[i]==t[i])
    {
        count++;
    }
    else break;
   }
   if(count>0)
   {
    cout<<count+(n-count)+(m-count)+1<<'\n';
   }
   else{
    cout<<n+m<<'\n';
   }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}