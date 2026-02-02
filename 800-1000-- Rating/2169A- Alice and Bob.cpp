#include<iostream>
using namespace std;
void solve()
{
    long long n,a;
    long long left=0,right=0;
    cin>>n>>a;
    for( int i=0;i<n;i++)
    {
        long long num;
        cin>>num;
        if(num>a){right++;}
        else if(num<a){left++;}
    }
    if(left>right){cout<<a-1<<"\n";}
    else if(right >left){cout<<a+1<<"\n";}
    else{
        if(left==0){cout<<1337<<"\n";}
        else{
            cout<<a+1<<"\n";
        }
    }

}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        solve();
        t--;
    }
    return 0;
}
