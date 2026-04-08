#include <bits/stdc++.h>
using ll=long long;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;cin>>n>>k;
    ll disc=9+8*(n+k);
    ll val=sqrt(disc);
    while(val*val<disc) val++;
    while(val*val>disc) val--;
    ll m=(-3LL +val)/2;
    cout<<n-m<<'\n';
    return 0;
}