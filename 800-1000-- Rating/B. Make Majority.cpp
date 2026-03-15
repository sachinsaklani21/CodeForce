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
       string s;cin>>s;
       int total=0,count=0,ones=0;
       for(int i =0;i<int(s.length());i++)
       {
        if(s[i]=='1')
        {
            if(count>0)
            {
                total++;
                count=0;
            }
            ones++;
        }
        else {
            count++;
        }
       }
       if(s.back()=='0')total++;
       if(total>=ones)cout<<"NO\n";
       else cout<<"YES\n";
        
    }
    return 0;
}
