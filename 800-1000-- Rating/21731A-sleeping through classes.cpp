#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k,max_sleep=-1,count=0;
        string s;
        cin>>n>>k>>s;
        for ( int j=0;j<n;j++){
            if(s[j]=='1'){max_sleep=max(max_sleep,j+k);}
            else if(s[j]=='0' && j>max_sleep){count++;}
        } cout<<count<<endl;
    }
    
}