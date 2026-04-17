#include <bits/stdc++.h>
using ll=long long;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int sum=0;
    for(int i=0;i<4;i++)
    {
        int temp;
        cin>>temp;
        sum+=temp;
    }
    cout<<15-sum<<'\n';
    return 0;
}