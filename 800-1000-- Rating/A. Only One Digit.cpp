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
        int x;cin>>x;
        int smal=11;
        while(x>0)
        {
            int rem=x%10;
            x/=10;
            if(rem<smal)smal=rem;
        }
        
        cout<<smal<<'\n';
    }
    return 0;
}