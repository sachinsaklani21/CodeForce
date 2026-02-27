#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int> freq(n);
    bool hasB=false;
    for (char c:s)
    {
        if(c=='B'){
            hasB=true;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            freq[i]=0;
        }
        else{
            int count=0;
            int temp=i;
            while(s[temp]=='A')
            {
                count++;
                temp=(temp+1)%n;
                if(count+i==n){break;}
            }
            freq[i]=count;
        }
    }
    for(int i=0;i<q;i++)
    {
        long long a;
        cin>>a;
        int curr=0,seconds=0;
        if(!hasB)
        {
            cout<<a<<"\n";
            continue;
        }
        while(a>0)
        {
            if(freq[curr]==0)
            {
                a/=2;
                seconds++;
                curr=(curr+1)%n;
            }
            else{
                if(a<=freq[curr])
                {
                    seconds+=a;
                    a=0;
                }
                else{
                    a-=freq[curr];
                    seconds+=freq[curr];
                    curr=(curr+freq[curr])%n;
                }
            }
        }
        cout<<seconds<<"\n";
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