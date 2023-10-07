#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;

        long long int a[n];
        int val=0;
        for(int i=0;i<n;i++){
            
            cin>>a[i];
            if(i>0){
                int diff1=a[i]-a[i-1];
                if(diff1<0){
                    if(val<a[i-1]){
                        val=a[i-1];

                    }
                }


            }
        }
        if(val>0){
            cout<<val<<endl;
        }
        if(val==0){
            cout<<0<<endl;
        }
    }
}