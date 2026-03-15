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
        int n;
        cin>>n;
        ll x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        ll a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='4')a++;
            else b++;
        }
        if((a+b)<max(abs(x),abs(y)) || (a+2*b)<(abs(x)+abs(y)))cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}