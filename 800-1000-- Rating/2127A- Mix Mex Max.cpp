#include<iostream>
#include<set>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    set<int> arr;
    bool yes=false;
    for (int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        if(num==0)
        {
           yes=true;
        }
        else if(num>0)
        {
            arr.insert(num);
        }


    }
    if(yes){cout<<"NO"<<"\n";return;}
    else if (arr.size()>1){cout<<"NO"<<"\n";return;}
    cout<<"YES"<<"\n";
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
