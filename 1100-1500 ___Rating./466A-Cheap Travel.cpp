#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,a,b,total_cost=0;
    cin>>n>>m>>a>>b;
    if(m*a<=b)
    {
        total_cost=n*a;
        cout<<total_cost<<"\n";
        return 0;
    }
    else{
        total_cost+=(n/m)*b;
        n=n%m;
        total_cost+=min(n*a,b);
    }
    cout<<total_cost<<"\n";
    return 0;
}