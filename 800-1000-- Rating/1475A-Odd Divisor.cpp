#include <bits/stdc++.h>

using namespace std;

void solve() {

    long long n;
    cin>>n;
    while(n>1)
    {
        if(!(n%2==0))
        {
            cout<<"YES"<<"\n";
        return ;
        }
        n/=2;
    }
    cout<<"NO"<<"\n";
    return ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0)
    {
        solve();
        t--;
    }
    return 0;
}