#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=n-1;
    while(i>0 && arr[i-1]>=arr[i])
    {
        i--;
    }
    while(i>0 && arr[i-1]<=arr[i])
    {
        i--;
    }
    cout<<i<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}