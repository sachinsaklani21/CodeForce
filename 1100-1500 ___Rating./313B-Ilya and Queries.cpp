#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n=s.length();
    vector<int> check(n+1,0);
    for(int i=1;i<n;i++)
    {
        check[i]=check[i-1];
        if(s[i]==s[i-1]){check[i]++;}
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int l,r;
        cin>>l>>r;
        cout<<check[r-1]-check[l-1]<<"\n";

    }

    return 0;
}