#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,curr_len=1,max_len=1;
    long long prev;
    cin>>n>>prev;
    if(n==1){cout<<1<<"\n";return 0;}
    if(n==0){cout<<0<<"\n";return 0;}
    for(int i=0;i<n-1;i++)
    {
        long long num;
        cin>>num;
        if(num>=prev)
        {
            curr_len++;
            max_len=max(max_len,curr_len);
        }else{curr_len=1;}
        prev=num;
    }
    cout<<max_len<<"\n";
    return 0;

}