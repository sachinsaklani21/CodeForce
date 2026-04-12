#include <bits/stdc++.h>
using ll=long long;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    ll min =LLONG_MAX;
    ll max=LLONG_MIN;
    vector<ll> arr(n);
    for(int i=0;i<n;i++)
    {
        int temp;cin>>temp;
        arr[i]=temp;
        if(temp>max)max=temp;
        if(temp<min)min=temp;
    }
    if(min==max)
    {
        cout<<0<<" "<<(n*(n-1))/2<<'\n';
    }
    else {
        ll min_count=count(arr.begin(),arr.end(),min);
        ll max_count=count(arr.begin(),arr.end(),max);
        cout<<max-min<<" "<<min_count*max_count<<'\n';
    }
    return 0;
}