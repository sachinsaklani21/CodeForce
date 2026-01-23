#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> arr(t*3);
    for (int i=0;i<t*3;i++){
        cin>> arr[i];
    }
    int check_1=0;
    int total_count=0;
    for (int j =0;j<t*3;j++){
        check_1+=arr[j];
        if((j+1)%3==0){
            if(check_1>=2){
            total_count++;
            check_1=0;}
            else{check_1=0;}
        }
        }

        
    cout<<total_count<<endl;
    return 0;
    
}