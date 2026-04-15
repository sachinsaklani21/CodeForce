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
        int n,m;cin>>n>>m;
        vector<vector<ll>> card(n,vector<ll>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>card[i][j];
            }
        }
        ll total=0;
        for(int col=0;col<m;col++)
        {
            vector<ll>col_values(n);
            for(int i=0;i<n;i++)
            {
                col_values[i]=card[i][col];
            }
            sort(col_values.begin(),col_values.end());
            vector<ll> prefix(n+1,0);
            for(int i=1;i<=n;i++)
            {
                prefix[i]=prefix[i-1]+col_values[i-1];
            }
            ll contribute=0;
            for(int i=1;i<=n;i++)
            {
                ll val=col_values[i-1];
                ll sum_smaller=prefix[i-1];
                contribute+=val*(i-1)-sum_smaller;
            }
            total+=contribute;
        }
        cout<<total<<'\n';
    }
    return 0;
}