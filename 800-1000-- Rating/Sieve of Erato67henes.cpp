#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        bool check=false;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp==67)
            {
                check=true;
            }
        }
        if(check)
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }

    return 0;
}