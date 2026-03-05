#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
    string x,y;
    cin>>x>>y;
    int a=x.size();
    int b=y.size();
    if(a>b|| a*2<b||x[0]!=y[0]){cout<<"NO\n";return;}
    vector<int> xx;
    vector<int>yy;
    int count=1;
    for(int i=1;i<a;i++)
    {
        if(x[i]!=x[i-1])
        {
            xx.push_back(count);
            count=1;
        }
        else{
            count++;
        }
    }
    xx.push_back(count);
    count=1;
    for(int i=1;i<b;i++)
    {
        if(y[i]!=y[i-1])
        {
            yy.push_back(count);
            count=1;
        }
        else{
            count++;
        }
    }
    yy.push_back(count);
    if(xx.size()!=yy.size()){cout<<"NO\n";return;}
    for(int i=0;i<xx.size();i++)
    {
        if(xx[i]>yy[i] || xx[i]*2<yy[i])
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES"<<"\n";
     
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}