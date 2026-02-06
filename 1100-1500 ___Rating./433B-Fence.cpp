#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    int l=1,indx=1,temp_sum=0;
    vector<int> arr(n);
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
        temp_sum+=arr[i];
    }
    long long min_sum=temp_sum;
    for(int i=k;i<n;i++)
    {
        cin>>arr[i];
        temp_sum+=arr[i];
        temp_sum-=arr[i-k];
        if(temp_sum<min_sum)
            {
                min_sum=temp_sum;
                indx=l+1;
            }
        l++;
    }
    cout<<indx<<"\n";
    return 0;
}