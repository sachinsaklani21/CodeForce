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
       int n;
       cin>>n;
       map<int,int> freq;
       int max_freq=0;
       for(int i=0;i<n;i++)
       {
        int temp;
        cin>>temp;
        freq[temp]++;
        if(freq[temp]>max_freq)
        {
            max_freq=freq[temp];
        }
       }
       cout<<n-max_freq<<'\n';
    }
    return 0;
}