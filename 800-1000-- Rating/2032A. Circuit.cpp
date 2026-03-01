#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,ones=0;
    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        int temp;
        cin>>temp;
        ones+=temp;
    }
    if(ones%2==0){cout<<0<<" ";}
    else{cout<<1<<" ";}
    int zereos=2*n-ones;
    cout<<min(zereos,ones)<<"\n";

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}