#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
    ll m,a,b,c,total=0;
    cin>>m>>a>>b>>c;
    total+=min(m,a);
    total+=min(m,b);
    if(total==(2*m)){cout<<total<<"\n";}
    else{
        if(((2*m)-total)<=c){cout<<2*m<<"\n";}
        else{cout<<total+c<<"\n";}
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}