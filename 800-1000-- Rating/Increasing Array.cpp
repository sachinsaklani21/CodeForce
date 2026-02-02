#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long prev=0;
    long long move=0;
    for(int i=0;i<n;i++)
    {
        long long num;
        cin>>num;
        if(num<prev){
            move+=prev-num;
        }
        else{prev=num;}
    }
    cout<<move<<"\n";
    return 0;
}