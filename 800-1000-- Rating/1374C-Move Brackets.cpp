#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,count=0,check=0;
        cin>>n;
        string s;
        cin>>s;
        for(int j=0;j<n;j++)
        {
            if(s[j]==')')
            {
                check--;
                if(check<0){count++;check++;}   
            }
            else{
                check++;
            }
        }
        cout<<count<<"\n";
    }

    return 0;
}