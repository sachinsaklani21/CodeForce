#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int l=0,max_len=0;
    for(int r=1;r<n;r++)
    {
        if(s[l]==s[r])
        {
            max_len=max(max_len,r-l+1);
        }
        else{l=r;}
    }
    if(max_len>=7){cout<<"YES"<<"\n";}
    else{cout<<"NO"<<"\n";}
    return 0;

}