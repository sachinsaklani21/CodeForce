#include<iostream>
using namespace std;
void solve()
{
   int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
   long long n;
   cin>>n;
   long long  best=2e18;
   for(int i=0;i<n;i++)
   {
    long long temp;
    cin>>temp;
    for(long long p:primes)
    {
        if(temp%p==0){
            if(p<best){best=p;}
        }
    }
   }
   if(best<10){cout<<best<<"\n";}
   else{cout<<-1<<"\n";} 
}
int main()
{
    long long t;
    cin>>t;
    while(t>0)
    {
        solve();
        t--;

    }
    return 0;
}