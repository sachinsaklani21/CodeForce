#include <bits/stdc++.h>

using namespace std;
void solve()
{
    vector<long long > arr(3);
    for( int i=0;i<3;i++)
    {
       cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr[2]==arr[1])
    {
        cout<<"YES"<<"\n";
        cout<<arr[0]<<" "<<arr[0]<<" "<<arr[2]<<"\n";
    }
    else{cout<<"NO"<<"\n";}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}