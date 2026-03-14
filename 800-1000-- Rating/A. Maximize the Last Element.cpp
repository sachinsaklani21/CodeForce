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
       int max_=0;
       for (int i=0;i<n;i++)
       {
        int temp;
        cin>> temp;
        if(temp>max_ && (i+1)%2!=0)
        {
            max_=temp;
        }
       }
       cout<<max_<<'\n';
    }
    return 0;
}