#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> pairs(n);
    for(int i=0;i<n;i++)
    {
        cin>>pairs[i].first;
    }
    for(int i=0;i<n;i++)
    {
        cin>>pairs[i].second;
    }
    sort(pairs.begin(),pairs.end());
    for(int i=0;i<n;i++)
    {
        cout<<pairs[i].first<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<pairs[i].second<<" ";
    }
    cout<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}