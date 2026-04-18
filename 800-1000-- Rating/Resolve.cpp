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
        int x,y;cin>>x>>y;
        if((x-y+1)%9==0 && ((x-y+1)/9)>=0)cout<<"yes\n";
        else cout<<"no\n";
        
    }
    return 0;
}