#include<iostream>
using namespace std;
int main()
{
    long long n,sum=0;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        long long temp;
        cin>>temp;
        sum+=temp;
    }
    long long Sn=(n*(n+1)/2);
    cout<<Sn-sum<<"\n";
    return 0;
}