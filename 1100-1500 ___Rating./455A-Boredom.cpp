#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,max_point=0;
    cin>>n;
    vector<int> freq;
    freq[0]=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        freq[temp]++;
    }
    for(int i=1;i<=9;i++)
    {
        freq[i]=freq[i-2]+(i*freq[i]);
        max_point=max(max_point,freq[i]);
    }
    cout<<max_point<<"\n";

    return 0;
}