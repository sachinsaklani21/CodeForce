#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin>>n;
    long long k;
    cin>>k;
    vector<long long> a(n);
    long long L=-1,R=4e18;
    for(int i=0;i<n;i++)
    {
        long long temp;
        cin>>temp;
        a[i]=temp;
        L=max(L,temp);
        R=min(R,temp+k);

    }
    bool correct_sum= false;
    long long fixed_sum=-1;
    for(int i=0;i<n;i++)
    {
        long long temp;
        cin>>temp;
        if(temp!=-1)
        {
            long long curr_sum=a[i]+temp;
            if(fixed_sum!=-1 && fixed_sum!=curr_sum)
            {
                correct_sum=true;
            }
            fixed_sum=curr_sum;
        }
    }
    if(correct_sum)
    {
        cout<<0<<"\n";
        return;
    }
    if(fixed_sum==-1)
    {
        if(L>R){cout<<0<<"\n"; return;}
        else cout<<R-L+1<<"\n"; return;
    }
    else 
    {
        if(fixed_sum>=L && fixed_sum<=R){cout<<1<<"\n";}
        else cout<<0<<"\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)solve();

    return 0;
}