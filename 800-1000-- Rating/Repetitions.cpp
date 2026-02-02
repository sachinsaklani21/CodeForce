#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int l=0;
    int max_len=1;
    for (int r=0;r<n;r++)
    {
        if(s[r]==s[l])
        {
            max_len=max(max_len,r-l+1);
        }
        else{l=r;}
    }
    cout<<max_len<<"\n";
    return 0;
}