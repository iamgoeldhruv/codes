#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    
    vector<int>v;
    
            
    for(int i=1;i<=n;i++)
    {
        if(n%i==0){
            v.push_back(2*(i+int(n/i)));
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0];
    
    
}