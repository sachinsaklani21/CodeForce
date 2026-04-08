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
        int n,k;
        cin>>n>>k;
        vector<ll> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<int> prefix_peak(n,0);
        for(int i=1;i<=n-2;i++)
        {
            if(arr[i]>arr[i-1]&& arr[i]>arr[i+1])prefix_peak[i]++;
        }
        vector<int> prefix(n+1,0);
        for(int i=1;i<=n;i++)
        {
            prefix[i]=prefix[i-1]+prefix_peak[i-1];
        }
        int max_peaks=-1;
        int best_l=-1;
        for( int l=0;l<=n-k;l++)
        {
            int peaks=prefix[l+k-1]-prefix[l+1];
            if(peaks>max_peaks)
            {
                max_peaks=peaks;
                best_l=l;
            }
        }
        cout<<max_peaks+1<<' '<<best_l+1<<'\n';
        
    }
    return 0;
}