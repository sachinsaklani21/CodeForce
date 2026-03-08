#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
   int n;
   cin>>n;
   vector<int> a(n);
   int max=0;
   for (int i=0;i<n;i++)
   {
     cin>>a[i];
    }
    for (int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(a[i]-temp>0){max+=a[i]-temp;}
    }
    cout<<max+1<<'\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}