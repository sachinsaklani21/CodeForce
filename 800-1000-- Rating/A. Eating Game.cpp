#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n,max_num=-1;
    cin>>n;
    map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        freq[temp]++;
        max_num=max(temp,max_num);
    }
    cout<<freq[max_num]<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}