#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int n=s.length();
        int min_remov=n;
        int non_zero=0;
        for( int j=0;j<n;j++)
        {
            if(s[j]!='0')
            {
                int removal=non_zero+(n-1-j);
                if(removal<min_remov){min_remov=removal;}
                non_zero++;
            }
        }
        cout<<min_remov<<"\n";
    }
    return 0;

}