#include<iostream>
using namespace std;
#include<vector>
#include <climits>
int main(){
    int t,n;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n;
        vector<int> arr(n);
        for ( int j=0;j<n;j++){
            cin>>arr[j];
        }
        int max_num=INT_MIN,count=0;
        for (int r=0;r<n;r++){
            if(arr[r]<max_num){count+=1;
            }
            else{max_num=arr[r];}
        }
        cout<<count<<endl;


    }

}