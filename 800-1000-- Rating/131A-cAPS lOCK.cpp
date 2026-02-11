#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    bool should_change= true;
    for(int i=1;i<int(s.length());i++)
    {
        if(islower(s[i]))
        {
            should_change=false;
            break;
        }
    }
    if(should_change)
    {
        for(int i=0;i<int(s.length());i++)
        {
            if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
            }
            else{
                s[i]=tolower(s[i]);
            }
        }
    }
    
    cout<<s<<"\n";
    return 0;
}