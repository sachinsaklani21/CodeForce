#include <bits/stdc++.h>

using namespace std;
struct Tree{
    int x,h;
};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,prev,count=2;
    cin>>n;
    if(n<3){cout<<n<<"\n";return 0;}
    vector<Tree> t(n);
    for(int i=0;i<n;i++)
    {
        cin>>t[i].x>>t[i].h;
    }
    prev=t[0].x;
    for(int i=1;i<=n-2;i++)
    {
        if((t[i].x-t[i].h)>prev)
        {
            count++;
            prev=t[i].x;
        }
        else if((t[i].x+t[i].h)<t[i+1].x)
        {
            count++;
            prev=t[i].x+t[i].h;
        }
        else{
            prev=t[i].x;
        }
    }
    cout<<count<<"\n";


    return 0;
}