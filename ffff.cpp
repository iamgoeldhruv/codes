#include<iostream>
using namespace std;
typedef map<char,int> mp;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        int d=0;
        cin>> s;
    
        mp x; 
        for(int i=0;i<n;i++){
            x[a[i]]++;
        }
        for(auto itr:x){
            if((itr.second)%2!=0){
                d=d+1;
            }
        }

        
        if(d<=k+1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }
}