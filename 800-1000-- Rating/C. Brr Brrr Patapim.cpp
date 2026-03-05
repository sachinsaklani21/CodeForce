#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> res((2*n)+1,0);
    vector<bool> used((2*n)+1,false);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int temp;
            cin>>temp;
            res[i+j]=temp;
            used[temp]=true;
        }
    }
    for(int i=1;i<=2*n;i++)
    {
        if(res[i]>0){cout<<res[i]<<" ";}
        else{
            for(int j=1;j<=2*n;j++)
            {
                if(!used[j]){
                    cout<<j<<" ";
                    break;
                }
            }
        }
    }
    
    cout<<"\n";

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}