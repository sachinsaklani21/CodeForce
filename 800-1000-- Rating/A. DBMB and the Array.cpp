#include<iostream>
#include<vector>
using namespace std;
#include<numeric>
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n,s,x;
        cin>>n>>s>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int total=accumulate(arr.begin(),arr.end(),0);
        if((s-total)>=0 && (s-total)%x==0){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}

    }
    return 0;

}