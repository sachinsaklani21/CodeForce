#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long first_person=-k-1;
        long long count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                long long gap=i-first_person-1;
                if(gap>k)
                {
                    count+=(gap-k)/(k+1);
                }
                first_person=i;
            }
        }
        long long last_person=n+k;
        long long gap=last_person-first_person-1;
        if(gap>k)
        {
            count+=(gap-k)/(k+1);
        }
        cout<<count<<"\n";
    }

    return 0;
}