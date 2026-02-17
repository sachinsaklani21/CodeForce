#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[101]={0};
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    for(int i=0;i<=100;i++)
    {
        if(arr[i]>0)
        {
            cout<<i<<" ";
            arr[i]--;
        }
    }
    for(int i=0;i<=100;i++)
    {
        while(arr[i]>0)
        {
            cout<<i<<" ";
            arr[i]--;
        }
    }
    cout<<"\n";
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