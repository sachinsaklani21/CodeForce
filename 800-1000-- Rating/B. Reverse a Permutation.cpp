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
        int n;cin>>n;
        int indx=1;
        vector<int> arr(n+1,0);
        for(int i=1;i<=n;i++)
        {
            int temp;
            cin>>temp;
            arr[i]=temp;
        }
        while(indx<=n && arr[indx]==n-indx+1)indx++;
        int r=-1;
        for(int i=indx;i<=n;i++)
        {
            if(arr[i]==n-indx+1) r=i;
        }
        for(int i=1;i<indx;i++)
        {
            cout<<arr[i]<<' ';
        }
        if(r!=-1)
        {
            for(int i=r;i>=indx;i--) cout<<arr[i]<<' ';
            for( int i=r+1;i<=n;i++)cout<<arr[i]<<' ';
        }
        else
        {
            for(int i=n;i>=indx;i--)cout<<arr[i]<<' ';
        }
        cout<<'\n';
        
    }
    return 0;
}