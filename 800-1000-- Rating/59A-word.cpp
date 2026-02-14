#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int cap=0,small=0;
    for(int i=0;i<int(s.length());i++)
    {
        if(islower(s[i]))
        {
            small++;
        }
        else{
            cap++;
        }
    }
    if(small<cap)
    {
        for(int i=0;i<int(s.length());i++)
        {
            s[i]=toupper(s[i]);
        }
        cout<<s<<"\n"; 
    }
    else{
        for(int i=0;i<int(s.length());i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<"\n";
    }

    return 0;
}