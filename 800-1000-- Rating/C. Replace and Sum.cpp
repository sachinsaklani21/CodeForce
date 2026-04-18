#include <bits/stdc++.h>
using ll=long long;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        int n,q;cin>>n>>q;
        vector<int> a(n+5);
        vector<int> b(n+5);
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];
        a[n+1]=0;
        for(int i=n;i>0;i--)
        {
            a[i]=max({a[i],b[i],a[i+1]});
            
        }
        vector<int>prefix(n+5,0);
        for(int i=1;i<=n;i++)
        {
            prefix[i]=prefix[i-1]+a[i];
        }
        for(int i=0;i<q;i++)
        {
            int l,r;cin>>l>>r;
            cout<<prefix[r]-prefix[l-1]<<" ";
        }
        cout<<'\n';
        
    }
    return 0;
}