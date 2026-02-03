#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,sum=0,temp_sum=0,count=0;
    cin>>n;
    if(n==1){cout<<1<<endl;return 0;}
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=n-1;i>=0;i--)
    {
        temp_sum+=arr[i];
        count++;
        sum-=arr[i];
        if(temp_sum>sum)
        {
            cout<<count<<"\n";
            return 0;
        }
        
    }
    return 0;
}
