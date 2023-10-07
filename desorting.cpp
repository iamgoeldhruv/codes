#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        long long int diff[n-1];
        long long int  min=INT_MAX;
        int index=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0){
                diff[i-1]=a[i]-a[i-1];
                if(diff[i-1]<min){
                    min=diff[i-1];
                   
                }
            }
        }
        sort(diff,diff+n-1);
        if(diff[0]<0){
            cout<<0<<endl;
           

        }
        else{
            cout<<(min/2)+1<<endl;

        }
    }
}