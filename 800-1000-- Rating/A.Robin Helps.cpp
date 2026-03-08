#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
   int n,k,count=0,sum=0;
   cin>>n>>k;
   for(int i=0;i<n;i++)
   {
    int temp;
    cin>>temp;
    if(temp>=k)
    {
        sum+=temp;
    }
    else if (temp==0)
    {
        if(sum>0){count++;sum--;}

    }

    }
   
   cout<<count<<'\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}