#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool found_wrong=false;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]){found_wrong=true;}
    }
    if(found_wrong){cout<<1<<"\n";}
    else{
        cout<<n<<"\n";
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