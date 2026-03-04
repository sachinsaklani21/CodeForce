#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
    string s;
    getline(cin,s);
    string res="";
    for(int i=0;i<s.length();i++)
    {
        if(res=="" && s[i]!=' '){res+=s[i];}
        else if(s[i]==' ' && i+1<s.length()){res+=s[i+1];}
    }
    cout<<res<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--)solve();
    return 0;
}