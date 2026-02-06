#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]==72 ||s[i]==81 ||s[i]==57){
            cout<<"YES"<<"\n";
            return 0;
        }
    }
    cout<<"NO"<<"\n";

    return 0;
}