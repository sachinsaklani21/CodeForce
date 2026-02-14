#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin>>k;
    long long n;
    cin>>n;
    int w;
    cin>>w;
    int have_sum=((2*k)+(w-1)*k)*w/2;
    if(have_sum>n)
    {
        cout<<have_sum-n<<"\n";
    }
    else{cout<<0<<"\n";}

    return 0;
}