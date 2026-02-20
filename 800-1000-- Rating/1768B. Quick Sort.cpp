#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n,k,count=1;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp==count)
        {
            count++;
        }
    }
    int final=n-(count-1);
    cout<<(final/k)+(final%k!=0)<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}