#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        long long n,a=0,b=0;
        cin>>n;
        bool is_possible=false;
        while(n>1)
        {
            if(n%2==0)
            {
                a++;
                n/=2;
            }
            else if(n%3==0){
                b++;
                n/=3;
            }
            else{
                is_possible=true;
                break;
            }
        }
        if(is_possible || a>b){cout<<-1<<"\n";}
        else {
            long long count=2*b-a;
            cout<<count<<"\n";}
        
    }

    return 0;
}