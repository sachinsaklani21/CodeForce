#include<iostream>
using namespace std;
int main()
{
    int n,even=0,odd=0,even_indx=0,odd_indx=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp%2==0){even++;even_indx=i;}
        else{odd_indx=i;odd++;}
    }
    if(even==1){cout<<even_indx+1<<"\n";}
    else{cout<<odd_indx+1<<"\n";}
    return 0;

}