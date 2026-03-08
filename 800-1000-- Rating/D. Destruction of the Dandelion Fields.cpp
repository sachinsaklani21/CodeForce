#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
   ll n;
   cin>>n;
   ll even_sum=0;
   vector<ll> odd;
   for(int i=0;i<n;i++)
   {
    ll temp;
    cin>>temp;
    if(temp%2==0)
    {
        even_sum+=temp;
    }
    else{
        odd.push_back(temp);
    }
   }
   if(odd.size()==0)
   {
    cout<<0<<'\n';
   }
   else{
    sort(odd.rbegin(),odd.rend());
    for(int i=0;i<int((odd.size()+1)/2);i++)
    {
       even_sum+=odd[i];
    }
    cout<<even_sum<<'\n';
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