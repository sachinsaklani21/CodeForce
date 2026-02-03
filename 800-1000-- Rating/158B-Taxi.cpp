#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,group;
    cin>>n;
    int freq[5]={0};
    for(int i=0;i<n;i++)
    {
        cin>>group;
        freq[group]++;
    }
    int total=0;
    total+=freq[4];
    total+=freq[2]/2;
    if(freq[2]%2!=0)
    {
        total++;
        freq[1]=max(0,freq[1]-2);
    }
    total+=freq[3];
    freq[1]=max(0,freq[1]-freq[3]);
    if(freq[1]>0)
    {
        total+=(freq[1]+3)/4;
    }
    cout<<total<<"\n";
    return 0;
}