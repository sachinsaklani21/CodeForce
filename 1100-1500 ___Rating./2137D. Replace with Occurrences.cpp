#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> b(n);
    vector<vector<int>> group(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        group[b[i]].push_back(i);
    }
    vector<int> a(n);
    int z=1;
    for(int k=1;k<=n;k++)
    {
        if(group[k].empty()){continue;}
        if(group[k].size()%k!=0)
        {
            cout<<-1<<"\n";
            return;
        }
        for(int i=0;i<group[k].size();i++)
        {
            if(i%k==0 && i!=0)
            {
                z++;
            }
            a[group[k][i]]=z;
        }
        z++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
