#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector <int> arr(n+1,0);
    for(int i=0;i<2*n;i++)
    {
        int temp;
        cin>>temp;
        if(arr[temp]==0){cout<<temp<<" ";}
        arr[temp]++;
    }
    cout<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}