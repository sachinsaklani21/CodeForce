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
        int n,k;cin>>n>>k;
        string s;
        cin>>s;
        int a=count(s.begin(),s.end(),'0');
        int b=count(s.begin(),s.end(),'1');
        int c=count(s.begin(),s.end(),'2');
        string ans(n,'+');
        for(int i=0;i<n;i++)
        {
            if(i<a+c||i>=n-b-c)ans[i]='?';
            if(i<a||i>=n-b||k==n)ans[i]='-';
        }
        cout<<ans<<'\n';
    }
    return 0;
}