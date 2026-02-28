#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    int count=0,last_one=-1e9;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            if(i-last_one>=k)
            {
                count++;
            }
            last_one=i;
        }
        
    }
    cout<<count<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}