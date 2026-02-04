#include<iostream>
using namespace std;
int main()
{
    int n,m,check=2;
    cin>>n>>m;
    int total=n*m;
    while((n*m)>0)
    { 
        total-=(m-1)-(n-1)-1;
        n--;
        m--;
        if((n*m)>0)
        {
            check++;
        }
        else{break;}
    }
    if(check%2==0){cout<<"Akshat"<<"\n";}
    else{cout<<"Malvika"<<"\n";}
    return 0;

}