#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int sum=0,bbg=INT_MIN,mnmn=INT_MAX;
    vector<int> arr(3);
    for (int i=0;i<3;i++){
        cin>>arr[i];
        if(arr[i]>bbg) bbg=arr[i];
        if(arr[i]<mnmn) mnmn=arr[i];
        sum+=arr[i];
    }
    if(bbg-mnmn>=10) cout<<"check again"<<endl;
    else cout<<"final "<<sum-bbg-mnmn<<endl;
    return 0;
}