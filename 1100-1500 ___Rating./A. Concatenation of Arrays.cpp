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
        int n;cin>>n;
        vector<tuple<ll,ll,ll>> arr(n);
        for(int i=0;i<n;i++)
        {
            ll f,s;
            cin>>f>>s;
            ll sum=f+s;
            arr[i]={f,s,sum};
        }
        sort(arr.begin(),arr.end(),[](const auto &a,const auto &b){return get<2>(a) < get<2>(b);});

        for(auto &p : arr)
        {
            cout<<get<0>(p)<<" "<<get<1>(p)<<" ";
        }
        cout<<'\n';
    }
    return 0;
}