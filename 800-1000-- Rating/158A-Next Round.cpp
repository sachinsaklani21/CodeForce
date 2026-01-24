#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int count=0;
    for (int j=0;j<n;j++){
        if(arr[j]<1){continue;}
        if (arr[j]>=arr[k-1]){
            count+=1;
        }
    }
    cout<<count<<endl;
}