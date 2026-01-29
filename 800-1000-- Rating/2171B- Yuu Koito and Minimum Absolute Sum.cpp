#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int j=0;j<n;j++){cin>>arr[j];}
        if(arr[0]==-1 && arr[n-1]==-1)
        {
            arr[0]=0;
            arr[n-1]=0;
        }
        else if(arr[0]==-1)
        {
            arr[0]=arr[n-1];
        }
        else if (arr[n-1]==-1)
        {
            arr[n-1]=arr[0];
        }
        long long min_sum=abs(arr[0]-arr[n-1]);
        cout<<min_sum<<"\n";
        
        for(int j=0;j<n;j++)
        {
            if(arr[j]==-1)
            {
                arr[j]=0;
            }
            cout<<arr[j]<<(j==n-1?"":" ");
        }
        cout<<"\n";
        
    }
    return 0;
}