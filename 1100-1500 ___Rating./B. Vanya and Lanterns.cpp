#include <bits/stdc++.h>
using ll=long long;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    ll l;cin>>l;
    vector<ll> arr(n);for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    double left_diff=arr[0]-0;
    double right_diff=l-arr[n-1];
    double mid_diff=0;
    for(int i=0;i<n-1;i++)
    {
        mid_diff=max(mid_diff,double(arr[i+1]-arr[i]));
    }
    cout<<fixed<<setprecision(10)<<max({left_diff,right_diff,(mid_diff/2.0)})<<'\n';
    return 0;
}