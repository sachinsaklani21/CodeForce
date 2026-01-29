#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int second_last=(n*n-1-n)+(n*n-2-n)+(n*n-n)+(n*n-1-2*n)+(n*n-1),last=(n*n-2)+(n*n-1)+(n*n)+(n*n-n-1);
        if(n==1){cout<<1<<endl;}
        else if(n==2){cout<<9<<endl;}
        else if(second_last>last){cout<<second_last<<endl;}
        else
        {
            cout<<last<<endl;
        }
        
    }
    return 0;
}