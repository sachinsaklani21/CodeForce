#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
   int n;
   cin>>n;
   vector<ll>arr(n);
   ll min_=2e18;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   for(int i=1;i<n;i++)
   {
    ll temp_min=max(arr[i],arr[i-1]);
    min_=min(temp_min,min_);
   }
   cout<<min_ -1<<"\n";
  
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}