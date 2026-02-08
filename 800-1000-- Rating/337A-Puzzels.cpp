#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,l=0,min_count=200000000;
    cin>>n>>m;
    vector<int> arr(m);
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int r=n-1;r<m;r++)
    {
        min_count=min(min_count,arr[r]-arr[l]);
        l++;
    }
    cout<<min_count<<"\n";
    return 0;
}