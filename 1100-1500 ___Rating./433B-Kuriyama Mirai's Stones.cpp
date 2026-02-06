#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<long long> v(n+1);
    vector<long long> u(n+1);
    vector<long long> sum_v(n+1,0);
    vector<long long >sum_u(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        u[i]=v[i];
        sum_v[i]=v[i]+sum_v[i-1];
    }
    sort(u.begin()+1,u.end());
    for(int i=1;i<=n;i++)
    {
        sum_u[i]=u[i]+sum_u[i-1];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1)
        {
            cout<<sum_v[r]-sum_v[l-1]<<"\n";
        }
        else{
            cout<<sum_u[r]-sum_u[l-1]<<"\n";
        }
    }

    return 0;
}