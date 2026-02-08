#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        if(n%4!=0){cout<<"NO"<<"\n";continue;}
        long long sum=0;
        cout<<"YES"<<"\n";
        for(long long  i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
            sum+=i;
        }
        
        for(long long i=1;i<=n-3;i+=2)
        {
            cout<<i<<" ";
            sum-=i;
        }
        cout<<sum<<"\n";
        
    }


    return 0;
}