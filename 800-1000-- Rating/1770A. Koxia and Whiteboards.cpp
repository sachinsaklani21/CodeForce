#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for(int i=0;i<n;i++)
    {
        long long temp;
        cin>>temp;
        pq.push(temp);
    }
    for(int i=0;i<m;i++)
    {
        long long temp;
        cin>>temp;
        pq.pop();
        pq.push(temp);
    }
    long long sum=0;
    while(!pq.empty())
    {
        sum+=pq.top();
        pq.pop();
    }
    cout<<sum<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}