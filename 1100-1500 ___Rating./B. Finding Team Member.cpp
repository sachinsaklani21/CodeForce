#include <bits/stdc++.h>
using ll=long long;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
        int total =n*2;
        vector<tuple<int,int,int>> pair;
        for(int i=1;i<=total;i++)
        {
            for(int j=1;j<i;j++)
            {
                int temp;
                cin>>temp;
                pair.emplace_back(temp,i,j);
            }
        }
        sort(pair.rbegin(),pair.rend());
        vector<int> patner(total+1,0);
        vector<bool> taken(total+1,false);
        for(auto &[temp,x,y]:pair)
        {
            if(!taken[x] && !taken[y]){
                patner[x]=y;
                patner[y]=x;
                taken[x]=true;
                taken[y]=true;
            }
        }
        for(int i=1;i<=total;i++)

        {
            cout<<patner[i]<<" ";
        }
        cout<<"\n";
    return 0;
}